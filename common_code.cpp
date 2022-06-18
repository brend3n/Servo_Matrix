#include "common_code.h"


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

/*
// Sets up function pointer 3d array
void init_fp_matrix()
{
  uint8_t row = 0;
  uint8_t col = 0;

  for(uint8_t k = 0; k < 2; k++)
  {
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
*/
// Sets up function pointer 3d array
void init_fp_matrix()
{
  uint8_t row = 0;
  uint8_t col = 0;

  for(uint8_t k = 0; k < 2; k++)
  {
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
        // If this works, then obiviously change this and the matrix_ops structure 
        // also get rid of outermost for loop.
        if (k==0)
          matrix_ops[OFF][row][col] = write_element;
        else
          matrix_ops[ON][row][col] = write_element;
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
        matrix_ops[ON][i][j](i,j,ON); // Not sure if this is right...probably need to fix this
      else
        continue;
    } 
  } 
}