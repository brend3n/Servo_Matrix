// Common code
#include "common_code.h"


// TODO: set this for each module
#define MODULE_ID 0
bool all_matrices [NUM_MODULES][NUM_ROWS][NUM_COLS];

// Global matrix for display on a single board
bool matrix_l [NUM_ROWS][NUM_COLS];

// Function pointers to control each servo in the matrix
struct matrix_element matrix_ops[NUM_ROWS][NUM_COLS];

// All the drivers on a single module
// Adafruit_PWMServoDriver boards[NUM_BOARDS];

// Stores all of the address for each board
// TODO: This should be used by the master module for getting all of the i2c address to send to
uint32_t addresses[NUM_BOARDS];

uint32_t base_addr = 0x40;


// TODO: MASTER ONLY function to take string and convert to text that will fit in modules combined matrix
// this function will then send each module thr pattern to display

// TODO: get_matrix_to_ display()
bool get_matrix_to_display()
{
    // Wait for CAN or ESP-NOW message from master
      // - Message should contain matrix of size [NUM_ROWS][NUM_COLS]
    // Save Matrix in matrix (global)
    return true;
}

void setup(){

/*
  Serial.begin(9600);

  // Setting all of the addresses
  for (uint8_t i = 0;i < NUM_BOARDS; i++)
  {
    addresses[i] = base_addr + i;
  }

  // Setting up each pwm driver board
  for(uint8_t i = 0;i < NUM_BOARDS; i++)
  {
    // Call constructor
    boards[i] = Adafruit_PWMServoDriver(addresses[i]);

    // Setup board class for Pwm Servo Driver
    boards[i].begin();
    boards[i].setPWMFreq(PWM_FREQ);  // I think this value needs to be set better
    
  }
  
  // Initialize the matrix for function pointers
  init_fp_matrix();

  // Turn all servos to OFF position
  set_all(OFF_STATE);
  */

}
void loop()
{

  // char* in;
  char in[1024];
  printf("Enter a string: ");
  scanf("%s", in);

  zero_out_matrix(all_matrices);
  
  string_to_matrix(in, all_matrices);

  print_matrix(all_matrices);
/*
  // String in_str;
  // Serial.print("Enter string to display: ");
  // while(!Serial.available()){} // Wait for string to be available

  // in_str = Serial.readString();
  // in_str.toCharArray(in,in_str.length());
  // Serial.println("Printing: " + in_str);

  // Serial.println("Processing string");
  printf("String: %s\n", in);
  // Make matrix for each module to display
  if (!string_to_matrix(in, all_matrices)){
    return; // Restart the loop
  }

  // send_out_matrices_to_modules();
  // TODO: send response to master saying its ready
  //  - Once Master receives this, then it will send BROADCAST message to all nodes to display message

  // TODO: Wait for master to send GO and then display


  // Serial.println("Displaying string:");
  display();
  
  // delay(DELAY_BETWEEN_STRINGS_MS); // Set 
  set_all(OFF_STATE);

  for(int i = 0; i < NUM_MODULES; i++)
  {
    for(int j = 0; i < NUM_ROWS; j++)
    {
      for(int k = 0; i < NUM_COLS; k++)
      {
        printf("%d", all_matrices[i][j][k]);
      }
    }
    printf("\n");
  }
*/  
}


int main(){
  // setup();
  while(true){loop();}
  return 0;
}
