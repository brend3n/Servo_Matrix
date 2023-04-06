#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mqtt_client.h"

#include <unistd.h>

#define ADDRESS     "192.168.1.224"
#define CLIENTID    "ServoMatrixClient"
#define TOPIC       "servo_matrix_event"
#define PAYLOAD     "Hello World!"
#define QOS         1
#define TIMEOUT     10000L


MQTTClient client;
MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
MQTTClient_message pubmsg = MQTTClient_message_initializer;
MQTTClient_deliveryToken token;

int mqtt_init(void)
{


    MQTTClient_create(&client, ADDRESS, CLIENTID,
        MQTTCLIENT_PERSISTENCE_NONE, NULL);
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    return 0;
}

int mqtt_deinit(void)
{
    MQTTClient_disconnect(client, 10000);
    MQTTClient_destroy(&client);

    return 0;
}

int mqtt_connect(void)
{
    int rc;

    if ((rc = MQTTClient_connect(client, &conn_opts)) != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to connect, return code %d\n", rc);
        exit(-1);
    }

    return rc;
}


int mqtt_send(char* msg)
{
    int rc;
    pubmsg.payload = (void*)msg;
    pubmsg.payloadlen = strlen(msg);
    pubmsg.qos = QOS;
    pubmsg.retained = 0;

    MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);
    printf("Waiting for up to %d seconds for publication of %s\n"
            "on topic %s for client with ClientID: %s\n",
            (int)(TIMEOUT/1000), msg, TOPIC, CLIENTID);
    rc = MQTTClient_waitForCompletion(client, token, TIMEOUT);
    printf("Message with delivery token %d delivered\n", token);
    return rc;
}



MQTTClient* get_client(void)
{
    return &client;
}

// int main(int argc, char* argv[])
// {

//     mqtt_init();

//     int rc;

//     rc = mqtt_connect();

//     while(1)
//     {
//         mqtt_send("Brenden");
//         sleep(2);
//     }


//     mqtt_deinit();
//     return rc;
// }