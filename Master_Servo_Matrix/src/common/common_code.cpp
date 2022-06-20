#include "common_code.h"

// Access array elements through enum
enum characters_enum{
  ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,
  SPACE,CURSOR,COLON,PERIOD,LEFT_PAREN,RIGHT_PAREN,PLUS,
  MULT,EQUAL,EXCLAM_POINT,QUESTION_MARK,MINUS,PERCENT,
  COMMA,UNDERSCORE,AT_SIGN,
  A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,
  a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
};

// Sets all of the pins either on or off
// Params: state: pass in either ON or OFF
void set_all(uint8_t state)
{
  for(uint8_t i = 0; i < NUM_BOARDS; i++)
  {
    for(uint8_t j = 0; j < 16; j++)
    {
      // boards[i].setPin(j, state, false);
    }
  }
}

// Writes a state (ON or OFF) to a pin on a given board
void write_element(uint8_t board_index, uint8_t pin, uint8_t state)
{
  // boards[board_index].setPin(pin,state,false);
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

// Sets the passed in matrix cell to the desired character.
void get_character_cell(char ch, bool (&cell)[CELL_HEIGHT][CELL_WIDTH])
{
  
  // Characters
  if(ch == 'a') memcpy(cell,characters[a],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'b') memcpy(cell,characters[b],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'c') memcpy(cell,characters[c],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'd') memcpy(cell,characters[d],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'e') memcpy(cell,characters[e],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'f') memcpy(cell,characters[f],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'g') memcpy(cell,characters[g],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'h') memcpy(cell,characters[h],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'i') memcpy(cell,characters[i],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'j') memcpy(cell,characters[j],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'k') memcpy(cell,characters[k],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'l') memcpy(cell,characters[l],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'm') memcpy(cell,characters[m],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'n') memcpy(cell,characters[n],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'o') memcpy(cell,characters[o],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'p') memcpy(cell,characters[p],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'q') memcpy(cell,characters[q],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'r') memcpy(cell,characters[r],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 's') memcpy(cell,characters[s],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 't') memcpy(cell,characters[t],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'u') memcpy(cell,characters[u],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'v') memcpy(cell,characters[v],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'w') memcpy(cell,characters[w],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'x') memcpy(cell,characters[x],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'y') memcpy(cell,characters[y],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'z') memcpy(cell,characters[z],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'A') memcpy(cell,characters[A],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'B') memcpy(cell,characters[B],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'C') memcpy(cell,characters[C],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'D') memcpy(cell,characters[D],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'E') memcpy(cell,characters[E],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'F') memcpy(cell,characters[F],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'G') memcpy(cell,characters[G],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'H') memcpy(cell,characters[H],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'I') memcpy(cell,characters[I],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'J') memcpy(cell,characters[J],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'K') memcpy(cell,characters[K],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'L') memcpy(cell,characters[L],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'M') memcpy(cell,characters[M],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'N') memcpy(cell,characters[N],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'O') memcpy(cell,characters[O],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'P') memcpy(cell,characters[P],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Q') memcpy(cell,characters[Q],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'R') memcpy(cell,characters[R],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'S') memcpy(cell,characters[S],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'T') memcpy(cell,characters[T],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'U') memcpy(cell,characters[U],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'V') memcpy(cell,characters[V],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'W') memcpy(cell,characters[W],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'X') memcpy(cell,characters[X],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Y') memcpy(cell,characters[Y],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Z') memcpy(cell,characters[Z],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  // Digits
  else if(ch == '0') memcpy(cell,characters[ZERO],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '1') memcpy(cell,characters[ONE],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '2') memcpy(cell,characters[TWO],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '3') memcpy(cell,characters[THREE],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '4') memcpy(cell,characters[FOUR],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '5') memcpy(cell,characters[FIVE],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '6') memcpy(cell,characters[SIX],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '7') memcpy(cell,characters[SEVEN],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '8') memcpy(cell,characters[EIGHT],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '9') memcpy(cell,characters[NINE],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);

  // Additional characters
  else if(ch == ' ') memcpy(cell,characters[SPACE],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ':') memcpy(cell,characters[COLON],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '.') memcpy(cell,characters[PERIOD],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '(') memcpy(cell,characters[LEFT_PAREN],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ')') memcpy(cell,characters[RIGHT_PAREN],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '+') memcpy(cell,characters[PLUS],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '*') memcpy(cell,characters[MULT],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '=') memcpy(cell,characters[EQUAL],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '!') memcpy(cell,characters[EXCLAM_POINT],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '?') memcpy(cell,characters[QUESTION_MARK],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '-') memcpy(cell,characters[MINUS],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '%') memcpy(cell,characters[PERCENT],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ',') memcpy(cell,characters[COMMA],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '_') memcpy(cell,characters[UNDERSCORE],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '@') memcpy(cell,characters[AT_SIGN],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else memcpy(cell,characters[CURSOR],sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
 
}

// Return true if char can fit in matrix, otherwise return false
// Also, append the char to the matrix
bool append_char_to_matrix(char c, bool (&matrix)[NUM_ROWS][NUM_COLS])
{
  // if c is a space, how many spaces (columns) to pad with
  // Ignore newline character
  bool cell[CELL_HEIGHT][CELL_WIDTH];
  get_character_cell(c, cell);
  // TODO: Append character cell into matrix

  return true;
}

// Params:
//        str <- string to print
//        matrix <- reference to matrix to fill
// Returns:
//        true <- if string can fit
//        false <- if string cannot fit
bool string_to_matrix(char* str, bool (&matrix)[NUM_ROWS][NUM_COLS]){
  /**
   * TODO:
   *
   * Figure out spaces between words/letters/etc.
   */

  // TODO: At somepoint it would be cool to implement scrolling text
  // Just keep appending chars to matrix and return that matrix. Then
  uint8_t str_l = strlen(str);
  for(uint8_t i = 0; i < str_l; i++){
    if(!append_char_to_matrix(str[i],matrix))
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
      if(matrix_l[i][j])
        write_element(matrix_ops[i][j].driver_num, matrix_ops[i][j].pin, ON);
      else
        continue;

    }
  }
}
