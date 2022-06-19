// Common code
#include "common_code.h"



// TODO: set this for each module
#define MODULE_ID 0


// Global matrix for display on a single board
bool matrix[NUM_ROWS][NUM_COLS];

// Function pointers to control each servo in the matrix
struct matrix_element matrix_ops[NUM_ROWS][NUM_COLS];


// All the drivers on a single module
Adafruit_PwmServoDriver boards[NUM_BOARDS];

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
    return;
}



void setup(){

  // Setting all of the addresses
  for (uint8_t i = 0;i < NUM_BOARDS; i++)
  {
    addresses[i] = base_addr + i;
  }

  // Setting up each pwm driver board
  for(uint8_t i = 0;i < NUM_BOARDS; i++)
  {
    // Call constructor
    boards[i] = Adafruit_PwmServoDriver(addresses[i]);

    // Setup board class for Pwm Servo Driver
    boards[i].begin();
    boards[i].setPwmFreq(PWM_FREQ);  // I think this value needs to be set better
    
  }
	
  // Initialize the matrix for function pointers
  init_fp_matrix();

  // Turn all servos to OFF position
  set_all(OFF_STATE);
}

void loop()
{
  // Master code is a bit different so this is not right at the moment

  // TODO: get_matrix_top_display() is not done yet
  // Do nothing until matrix is ready
  while(get_matrix_to_display() != true);

  // TODO: send response to master saying its ready
  //  - Once Master receives this, then it will send BROADCAST message to all nodes to display message

  // TODO: Wait for master to send GO and then display


  display();

  delay(DELAY_BETWEEN_STRINGS_MS); // Set 
  set_all(OFF_STATE);

}