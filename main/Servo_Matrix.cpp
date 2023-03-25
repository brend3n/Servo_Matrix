// Common code
#include "common_code.h"

bool string_matrix [NUM_ROWS][NUM_COLS];

void setup()
{
}

void loop()
{

  // char* in;
  char in[1024];
  char * res;
  printf("Enter a string: ");
  fgets(in, 1024, stdin);
  printf("Input: %s\n", in);

  zero_out_matrix(string_matrix);
  
  string_to_matrix(in, string_matrix);

  print_matrix(string_matrix);

  // Prints the matrix for each of the boards
  // Note: This implies a string must be printed or displayed on a given number of boards.
  // strings that could not be displayed on the given set number of boards would not be fully displayed
  for (int index = 0; index < NUM_BOARDS; index++)
    print_each_board_matrix(string_matrix, index);

  print_matrices_until_string_depleted(string_matrix);
}


int main(){
  setup();
  while(true){loop();}

  return 0;
}
