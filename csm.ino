#include <Wire.h>
#include <Adafruit_PwmServoDriver.h>

#define NUM_BOARDS 6

#define OFF_STATE 0   // PWM for off
#define ON_STATE 4095 // PWM for on

#define PWM_FREQ 0    // TODO: Set this accordingly
#define NUM_ROWS 10 
#define NUM_COLS 10

#define OFF 0         // OFF function pointer 2d array
#define ON  1         // ON function pointer 2d array


// TODO: set this for each module
#define MODULE_ID 0


// Global matrix for display on a single board
bool matrix[NUM_ROWS][NUM_COLS];


// Typedef for function pointers
typedef void (*matrix_write)(uint8_t, uint8_t, uint8_t);

// Function pointers to control each servo in the matrix
matrix_write matrix_ops[2][NUM_ROWS][NUM_COLS];


// All the drivers on a single module
Adafruit_PwmServoDriver boards[NUM_BOARDS];

// Stores all of the address for each board
// TODO: This should be used by the master module for getting all of the i2c address to send to
addr_t addresses[NUM_BOARDS];

addr_t base_addr = 0x40;


// TODO: MASTER ONLY function to take string and convert to text that will fit in modules combined matrix
// this function will then send each module thr pattern to display

// TODO: get_matrix_to_ display()
void get_matrix_to_display()
{
    // Wait for i2c message
    // Message should contain matrix of size [NUM_ROWS][NUM_COLS]
    // Save Matrix in matrix (global)
    return;
}

// Sets all of the pins either on or off
// Params: state: pass in either ON or OFF
void set_all(uint8_t state)
{
  for(uint8_t i = 0; i < NUM_BOARDS; i++)
  {
    for(uint8_t j = 0; j < 16; j++)
    {
      boards[i].setPin(j, state, false);
    }
  }
}

// Writes a state (ON or OFF) to a pin on a given board
void write_element(uint8_t board_index, uint8_t pin, uint8_t state)
{
  boards[board_index].setPin(pin,state,false);
}

void init_matrix()
{
  uint8_t row = 0;
  uint8_t col = 0;

  for(uint8_t k = 0; k < 2; k++){
    for(uint8_t i = 0; i < NUM_BOARDS; i++)
    {
      for(uint8_t j = 0; j < 16; j++)
      {
        // Stop putting function pointers at end of COLS
        if (col == NUM_COLS)
        {
          col = 0;
          row++;
        }
        if (k==0)
          matrix_ops[OFF][row][col] = write_element(i,j,OFF_STATE);
        else
          matrix_ops[ON][row][col] = write_element(i,j,ON_STATE);
        col++;   // Go to next position to fill
      } 
    }
  }
}

void display(){
  for(uint8_t i = 0; i < NUM_ROWS; i++)
  {
    for(uint8_t j = 0; j < NUM_COLS; j++)
    {
      // Display if there is something
      if(matrix[i][j])
        matrix_ops[i][j]();
      else
        continue;
    } 
  } 
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
    boards[i] = Adafruit_PwmServoDriver(addresses[i]);
    boards[i] = begin();
    boards[i].setPwmFreq(PWM_FREQ);
  }
	
  // Turn all servos to OFF position
  set_all(OFF_STATE);
}

void loop(){

}


