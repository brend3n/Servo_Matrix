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

void get_character_cell(char ch, bool(&m)[CELL_HEIGHT][CELL_WIDTH])
{
  /*Characters*/
  if(ch == 'a') memcpy(m,a,sizeof(m));
  else if(ch == 'b') memcpy(m,b,sizeof(m));
  else if(ch == 'c') memcpy(m,c,sizeof(m));
  else if(ch == 'd') memcpy(m,d,sizeof(m));
  else if(ch == 'e') memcpy(m,e,sizeof(m));
  else if(ch == 'f') memcpy(m,f,sizeof(m));
  else if(ch == 'g') memcpy(m,g,sizeof(m));
  else if(ch == 'h') memcpy(m,h,sizeof(m));
  else if(ch == 'i') memcpy(m,i,sizeof(m));
  else if(ch == 'j') memcpy(m,j,sizeof(m));
  else if(ch == 'k') memcpy(m,k,sizeof(m));
  else if(ch == 'l') memcpy(m,l,sizeof(m));
  else if(ch == 'm') memcpy(m,m,sizeof(m));
  else if(ch == 'n') memcpy(m,n,sizeof(m));
  else if(ch == 'o') memcpy(m,o,sizeof(m));
  else if(ch == 'p') memcpy(m,p,sizeof(m));
  else if(ch == 'q') memcpy(m,q,sizeof(m));
  else if(ch == 'r') memcpy(m,r,sizeof(m));
  else if(ch == 's') memcpy(m,s,sizeof(m));
  else if(ch == 't') memcpy(m,t,sizeof(m));
  else if(ch == 'u') memcpy(m,u,sizeof(m));
  else if(ch == 'v') memcpy(m,v,sizeof(m));
  else if(ch == 'w') memcpy(m,w,sizeof(m));
  else if(ch == 'x') memcpy(m,x,sizeof(m));
  else if(ch == 'y') memcpy(m,y,sizeof(m));
  else if(ch == 'z') memcpy(m,z,sizeof(m));
  else if(ch == 'A') memcpy(m,A,sizeof(m));
  else if(ch == 'B') memcpy(m,B,sizeof(m));
  else if(ch == 'C') memcpy(m,C,sizeof(m));
  else if(ch == 'D') memcpy(m,D,sizeof(m));
  else if(ch == 'E') memcpy(m,E,sizeof(m));
  else if(ch == 'F') memcpy(m,F,sizeof(m));
  else if(ch == 'G') memcpy(m,G,sizeof(m));
  else if(ch == 'H') memcpy(m,H,sizeof(m));
  else if(ch == 'I') memcpy(m,I,sizeof(m));
  else if(ch == 'J') memcpy(m,J,sizeof(m));
  else if(ch == 'K') memcpy(m,K,sizeof(m));
  else if(ch == 'L') memcpy(m,L,sizeof(m));
  else if(ch == 'M') memcpy(m,M,sizeof(m));
  else if(ch == 'N') memcpy(m,N,sizeof(m));
  else if(ch == 'O') memcpy(m,O,sizeof(m));
  else if(ch == 'P') memcpy(m,P,sizeof(m));
  else if(ch == 'Q') memcpy(m,Q,sizeof(m));
  else if(ch == 'R') memcpy(m,R,sizeof(m));
  else if(ch == 'S') memcpy(m,S,sizeof(m));
  else if(ch == 'T') memcpy(m,T,sizeof(m));
  else if(ch == 'U') memcpy(m,U,sizeof(m));
  else if(ch == 'V') memcpy(m,V,sizeof(m));
  else if(ch == 'W') memcpy(m,W,sizeof(m));
  else if(ch == 'X') memcpy(m,X,sizeof(m));
  else if(ch == 'Y') memcpy(m,Y,sizeof(m));
  else if(ch == 'Z') memcpy(m,Z,sizeof(m));

  /*Digits*/
  else if(ch == '0') memcpy(m,ZERO,sizeof(m));
  else if(ch == '1') memcpy(m,ONE,sizeof(m));
  else if(ch == '2') memcpy(m,TWO,sizeof(m));
  else if(ch == '3') memcpy(m,THREE,sizeof(m));
  else if(ch == '4') memcpy(m,FOUR,sizeof(m));
  else if(ch == '5') memcpy(m,FIVE,sizeof(m));
  else if(ch == '6') memcpy(m,SIX,sizeof(m));
  else if(ch == '7') memcpy(m,SEVEN,sizeof(m));
  else if(ch == '8') memcpy(m,EIGHT,sizeof(m));
  else if(ch == '9') memcpy(m,NINE,sizeof(m));
 
  /*Additional characters*/
  else if(ch == ' ') memcpy(m,SPACE,sizeof(m));
  else if(ch == ':') memcpy(m,COLON,sizeof(m));
  else if(ch == '.') memcpy(m,PERIOD,sizeof(m));
  else if(ch == '(') memcpy(m,LEFT_PAREN,sizeof(m));
  else if(ch == ')') memcpy(m,RIGHT_PAREN,sizeof(m));
  else if(ch == '+') memcpy(m,PLUS,sizeof(m));
  else if(ch == '*') memcpy(m,MULT,sizeof(m));
  else if(ch == '=') memcpy(m,EQUAL,sizeof(m));
  else if(ch == '!') memcpy(m,EXCLAM_POINT,sizeof(m));
  else if(ch == '?') memcpy(m,QUESTION_MARK,sizeof(m));
  else if(ch == '-') memcpy(m,MINUS,sizeof(m));
  else if(ch == '%') memcpy(m,PERCENT,sizeof(m));
  else if(ch == ',') memcpy(m,COMMA,sizeof(m));
  else if(ch == '_') memcpy(m,UNDERSCORE,sizeof(m));
  else if(ch == '@') memcpy(m,AT_SIGN,sizeof(m));
  else memcpy(m,CURSOR,sizeof(m));

}

// Return true if char can fit in matrix, otherwise return false
// Also, append the char to the matrix
bool append_char_to_matrix(char c, bool(&matrix)[NUM_ROWS][NUM_COLS])
{
  // if c is a space, how many spaces (columns) to pad with
  // Ignore newline character
  bool cell[CELL_HEIGHT][CELL_WIDTH];
  get_character_cell(c, cell);
  // TODO: Append character cell into matrix
  
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