#include "common_code.h"

// Character matrix arrays
extern bool characters [][CELL_HEIGHT][CELL_WIDTH];

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

// Sets up function pointer 3d array
void init_fp_matrix()
{
  uint8_t row = 0;
  uint8_t col = 0;

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
      
      matrix_ops[row][col].pin = j;
      matrix_ops[row][col].driver_num = i;
      col++;   // Go to next position to fill
    } 
  }
}

// Return true if char can fit in matrix, otherwise return false
// Also, append the char to the matrix
bool append_char_to_matrix(char c, bool(&matrix)[NUM_ROWS][NUM_COLS])
{
  // if c is a space, how many spaces (columns) to pad with
  // Ignore newline character
  
}

// Params: 
//        str <- string to print
//        matrix <- reference to matrix to fill
// Returns:
//        true <- if string can fit
//        false <- if string cannot fit
bool string_to_matrix(String str, bool (&matrix)[NUM_ROWS][NUM_COLS]){
  /**
   * TODO:
   * 
   * Figure out spaces between words/letters/etc.
   */

  // TODO: At somepoint it would be cool to implement scrolling text
  // Just keep appending chars to matrix and return that matrix. Then 
  for(char c : str){
    if(!append_char_to_matrix(c,matrix))
      return false;
  }
  return true;
}

void display(){
  for(uint8_t i = 0; i < NUM_ROWS; i++)
  {
    for(uint8_t j = 0; j < NUM_COLS; j++)
    {
      // Display if there is something
      if(matrix[i][j])
        write_element(matrix_ops[i][j].driver_num, matrix_ops[i][j].pin, ON);
      else
        continue;
      
    } 
  } 
}