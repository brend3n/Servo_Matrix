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
  if(ch == 'a') memcpy(cell,a_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'b') memcpy(cell,b_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'c') memcpy(cell,c_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'd') memcpy(cell,d_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'e') memcpy(cell,e_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'f') memcpy(cell,f_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'g') memcpy(cell,g_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'h') memcpy(cell,h_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'i') memcpy(cell,i_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'j') memcpy(cell,j_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'k') memcpy(cell,k_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'l') memcpy(cell,l_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'm') memcpy(cell,m_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'n') memcpy(cell,n_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'o') memcpy(cell,o_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'p') memcpy(cell,p_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'q') memcpy(cell,q_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'r') memcpy(cell,r_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 's') memcpy(cell,s_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 't') memcpy(cell,t_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'u') memcpy(cell,u_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'v') memcpy(cell,v_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'w') memcpy(cell,w_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'x') memcpy(cell,x_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'y') memcpy(cell,y_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'z') memcpy(cell,z_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'A') memcpy(cell,A_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'B') memcpy(cell,B_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'C') memcpy(cell,C_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'D') memcpy(cell,D_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'E') memcpy(cell,E_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'F') memcpy(cell,F_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'G') memcpy(cell,G_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'H') memcpy(cell,H_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'I') memcpy(cell,I_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'J') memcpy(cell,J_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'K') memcpy(cell,K_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'L') memcpy(cell,L_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'M') memcpy(cell,M_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'N') memcpy(cell,N_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'O') memcpy(cell,O_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'P') memcpy(cell,P_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Q') memcpy(cell,Q_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'R') memcpy(cell,R_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'S') memcpy(cell,S_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'T') memcpy(cell,T_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'U') memcpy(cell,U_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'V') memcpy(cell,V_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'W') memcpy(cell,W_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'X') memcpy(cell,X_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Y') memcpy(cell,Y_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Z') memcpy(cell,Z_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '0') memcpy(cell,ZERO_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '1') memcpy(cell,ONE_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '2') memcpy(cell,TWO_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '3') memcpy(cell,THREE_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '4') memcpy(cell,FOUR_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '5') memcpy(cell,FIVE_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '6') memcpy(cell,SIX_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '7') memcpy(cell,SEVEN_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '8') memcpy(cell,EIGHT_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '9') memcpy(cell,NINE_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ' ') memcpy(cell,SPACE_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ':') memcpy(cell,COLON_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '.') memcpy(cell,PERIOD_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '(') memcpy(cell,LEFT_PAREN_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ')') memcpy(cell,RIGHT_PAREN_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '+') memcpy(cell,PLUS_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '*') memcpy(cell,MULT_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '=') memcpy(cell,EQUAL_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '!') memcpy(cell,EXCLAM_POINT_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '?') memcpy(cell,QUESTION_MARK_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '-') memcpy(cell,MINUS_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '%') memcpy(cell,PERCENT_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ',') memcpy(cell,COMMA_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '_') memcpy(cell,UNDERSCORE_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '@') memcpy(cell,AT_SIGN_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else memcpy(cell,CURSOR_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
 
}

// Return true if char can fit in matrix, otherwise return false
// Also, append the char to the matrix
bool append_char_to_matrix(char c, bool (&matrix)[NUM_MODULES][NUM_ROWS][NUM_COLS])
{
  // if c is a space, how many spaces (columns) to pad with
  // Ignore newline character
  bool cell[CELL_HEIGHT][CELL_WIDTH];
  get_character_cell(c, cell);

  // TODO: Append character cell into matrix
  // Tightly pack character matrices into matrix vertical line at a time
  // One space(vertical strip of OFF) between letters for now
  // three spaces(vertical strips of OFF) between words.
  static int curr_module = 0;
  static int current_col = 0;
  // static int current_row = 0;

  printf("sdf");
  for(int i = 0; i < CELL_WIDTH; i++)
  {
    for(int j = 0;j < CELL_HEIGHT; j++)
    {
      // Ran out of space
      if(current_col+j > (NUM_MODULES*NUM_COLS))
      {
        printf("OVERFLOW\n");
        return false;
      }
      // If hit the end of module, go to the next one 
      if(current_col+j == (NUM_COLS-1))
        curr_module++;

      matrix[curr_module][current_col+j][i] = cell[j][i];
    }
    current_col++;
  }

  // Put a space between each character
  current_col++;
  return true;
}

// Params:
//        str <- string to print
//        matrix <- reference to matrix to fill
// Returns:
//        true <- if string can fit
//        false <- if string cannot fit
bool string_to_matrix(char* str, bool (&matrix)[NUM_MODULES][NUM_ROWS][NUM_COLS]){
  /**
   * TODO:
   *
   * Figure out spaces between words/letters/etc.
   */

  // TODO: At somepoint it would be cool to implement scrolling text
  // Just keep appending chars to matrix and return that matrix. Then
  uint8_t str_l = strlen(str);
  for(uint8_t i = 0; i < str_l; i++){
    if(!append_char_to_matrix(str[i],matrix)){
      printf("\nReturning false from append_char_to_matrix\n");
      return false;
    }
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
