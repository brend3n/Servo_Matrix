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
  scanf("%s", in);

  zero_out_matrix(string_matrix);
  
  string_to_matrix(in, string_matrix);

  print_matrix(string_matrix);
}


int main(){
  setup();
  while(true){loop();}
  return 0;
}
