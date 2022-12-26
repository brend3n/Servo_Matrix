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
}

// Writes a state (ON or OFF) to a pin on a given board
void write_element(uint8_t board_index, uint8_t pin, uint8_t state)
{
}

// Sets the passed in matrix cell to the desired character.
void get_character_cell(char ch, bool (&cell)[CELL_HEIGHT][CELL_WIDTH])
{
  
  // Characters
  if(ch == 'a')      memcpy(cell,a_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'b') memcpy(cell,b_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'c') memcpy(cell,c_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'd') memcpy(cell,d_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'e') memcpy(cell,e_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'f') memcpy(cell,f_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'g') memcpy(cell,g_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'h') memcpy(cell,h_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'i') memcpy(cell,i_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'j') memcpy(cell,j_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'k') memcpy(cell,k_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'l') memcpy(cell,l_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'm') memcpy(cell,m_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'n') memcpy(cell,n_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'o') memcpy(cell,o_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'p') memcpy(cell,p_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'q') memcpy(cell,q_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'r') memcpy(cell,r_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 's') memcpy(cell,s_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 't') memcpy(cell,t_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'u') memcpy(cell,u_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'v') memcpy(cell,v_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'w') memcpy(cell,w_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'x') memcpy(cell,x_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'y') memcpy(cell,y_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'z') memcpy(cell,z_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'A') memcpy(cell,A_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'B') memcpy(cell,B_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'C') memcpy(cell,C_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'D') memcpy(cell,D_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'E') memcpy(cell,E_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'F') memcpy(cell,F_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'G') memcpy(cell,G_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'H') memcpy(cell,H_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'I') memcpy(cell,I_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'J') memcpy(cell,J_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'K') memcpy(cell,K_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'L') memcpy(cell,L_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'M') memcpy(cell,M_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'N') memcpy(cell,N_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'O') memcpy(cell,O_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'P') memcpy(cell,P_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Q') memcpy(cell,Q_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'R') memcpy(cell,R_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'S') memcpy(cell,S_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'T') memcpy(cell,T_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'U') memcpy(cell,U_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'V') memcpy(cell,V_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'W') memcpy(cell,W_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'X') memcpy(cell,X_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Y') memcpy(cell,Y_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == 'Z') memcpy(cell,Z_cell,            sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '0') memcpy(cell,ZERO_cell,         sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '1') memcpy(cell,ONE_cell,          sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '2') memcpy(cell,TWO_cell,          sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '3') memcpy(cell,THREE_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '4') memcpy(cell,FOUR_cell,         sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '5') memcpy(cell,FIVE_cell,         sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '6') memcpy(cell,SIX_cell,          sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '7') memcpy(cell,SEVEN_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '8') memcpy(cell,EIGHT_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '9') memcpy(cell,NINE_cell,         sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ' ') memcpy(cell,SPACE_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ':') memcpy(cell,COLON_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '.') memcpy(cell,PERIOD_cell,       sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '(') memcpy(cell,LEFT_PAREN_cell,   sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ')') memcpy(cell,RIGHT_PAREN_cell,  sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '+') memcpy(cell,PLUS_cell,         sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '*') memcpy(cell,MULT_cell,         sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '=') memcpy(cell,EQUAL_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '!') memcpy(cell,EXCLAM_POINT_cell, sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '?') memcpy(cell,QUESTION_MARK_cell,sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '-') memcpy(cell,MINUS_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '%') memcpy(cell,PERCENT_cell,      sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == ',') memcpy(cell,COMMA_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '_') memcpy(cell,UNDERSCORE_cell,   sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '@') memcpy(cell,AT_SIGN_cell,      sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else if(ch == '\n')memcpy(cell,SPACE_cell,        sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);
  else               memcpy(cell,CURSOR_cell,       sizeof(bool)*CELL_HEIGHT*CELL_WIDTH);

  for(int i = 0; i < CELL_HEIGHT;i++){
    for(int j = 0; j < CELL_WIDTH;j++){
      printf("%c", (cell[i][j]) ? ON_ : OFF_);
    }
    printf("\n");
  }
 
}

void print_matrix(bool (&matrix)[NUM_ROWS][NUM_COLS]){
	int count = 0;

	printf("\n\nFinal Matrix: \n");
	
	for(int j = 0; j < NUM_ROWS; j++)
	{
		for(int k = 0; k < NUM_COLS; k++)
		{
			printf("%c", (matrix[j][k] == 1)?ON_:OFF_);
			count++;
		}	
		printf("\n");
	}
	printf("\n");
}

void zero_out_matrix(bool (&matrix)[NUM_ROWS][NUM_COLS])
{
    for(int j = 0; j < NUM_ROWS; j++){
    	for(int k = 0; k < NUM_COLS; k++){
    		matrix[j][k] = 0;
    	}
    }
}

// TODO: This has to be updated
void copy_column(bool (&dest)[NUM_ROWS][NUM_COLS], bool (&src)[CELL_HEIGHT][CELL_WIDTH], int column_index, int iteration, int starting_row){
  // Copy a single column from src array to destination array. 
  // Copy the column from src and put it in dest starting at the starting row in dest array
  printf("Curr column: %d\n", column_index);
  for(int i = 0; i < CELL_HEIGHT; i++){
    if((starting_row+i) > (NUM_ROWS-1))
    {
      printf("poopy\n");
      break;
    }
    dest[starting_row+i][column_index+iteration] = src[i][iteration];
    printf("i: %d  dest: %d  src: %d\n",i,dest[i+starting_row][column_index+iteration], src[i][iteration]);
  }
}

// TODO: This has to be updated
// Return true if char can fit in matrix, otherwise return false
// Also, append the char to the matrix
bool append_char_to_matrix(char c, bool (&matrix)[NUM_ROWS][NUM_COLS], int* base_col, int iteration)
{
  // Append a single column SINGLE_COLUMN
  bool cell[CELL_HEIGHT][CELL_WIDTH];

//   if (c == '_'){
//     printf("ADDING SINGLE COLUMN\n");
//     get_character_cell(' ', cell);
//     copy_column(matrix, cell, *base_col, 0, NUM_ROWS-CELL_HEIGHT);
//     *base_col += 1;
//     return true;
//   }

  get_character_cell(c, cell);


  for(int i = 0; i < CELL_WIDTH; i++){

    // // If first letter, skip
    // if(iteration != 0)
    // {
    //   // Check if there is no space between the previous character's last column
    //   //  Loop over ever row in the last column
    //   for (int i = 0; i < NUM_ROWS; i++)
    //   {
    //       printf("base_col: %d\n", *base_col);
    //       // Check if it is filled
    //       if (matrix[i + (NUM_ROWS-CELL_HEIGHT)][*base_col-1] == 1)
    //       {
    //         // If there is no space, add one
    //         get_character_cell(' ', cell);
    //         copy_column(matrix, cell, *base_col, 0, NUM_ROWS-CELL_HEIGHT);
    //         *base_col += 1;
    //         break; // Done needing to add another empty column
    //       }
    //   }
    // }
  
    copy_column(matrix, cell, *base_col, i, NUM_ROWS-CELL_HEIGHT);
  }
  *base_col += CELL_WIDTH;

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
  int base_col = 0; 

  // TODO: At somepoint it would be cool to implement scrolling text
  // Just keep appending chars to matrix and return that matrix. Then
  uint8_t str_l = strlen(str);

  // Loop over all characters in string, and append to matrix
  for(uint8_t i = 0; i < str_l; i++){
    printf("Curr char: %c\n", str[i]);

    // if(str[i] == '_')
	// {
    //   uint8_t num_cols_in_space = 1;
    //   for(uint8_t i = 0; i < num_cols_in_space; i++){
    //     if(!append_char_to_matrix('_', matrix, &base_col, i)){
    //       printf("\nReturning false from append_char_to_matrix\n");
    //       return false;
    //     }
    //   }
    //   continue;
    // }

    if(!append_char_to_matrix(str[i], matrix, &base_col, i)){
      printf("\nReturning false from append_char_to_matrix\n");
      return false;
    }
  }
  return true;
}

// Display the text thin
void display()
{
}