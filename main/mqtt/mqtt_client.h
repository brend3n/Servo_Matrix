#ifndef MQTT_CLIENT_WRAPPER_
#define MQTT_CLIENT_WRAPPER_

#include "MQTTClient.h"
int mqtt_send(char* msg);
int mqtt_connect(void);
int mqtt_init(void);
int mqtt_deinit(void);
MQTTClient* get_client(void);

#endif