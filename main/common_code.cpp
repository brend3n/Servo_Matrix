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

void print_each_board_matrix(bool (&matrix)[NUM_ROWS][NUM_COLS], int index){

  int start_col = index*COLS_PER_BOARD;
  int end_col = index*COLS_PER_BOARD + COLS_PER_BOARD - 1;

  int index_counter;
  

  printf("Matrix for Board %d\n", index);
  for(int j = 0; j < NUM_ROWS; j++)
  {
    index_counter = 0;
    for(int k = 0; k < NUM_COLS; k++)
    {
      if (index_counter >= start_col && index_counter <= end_col)
      {
        printf("%c", (matrix[j][k] == 1)?ON_:OFF_);
      }
      index_counter++;
    }	
    printf("\n");
  }
  
	printf("\n");
}

int get_last_active_column_from_front (bool (&matrix)[NUM_ROWS][NUM_COLS])
{
  int last_col = 0;
  // uint8_t max_consecutive_empty_cols = 4;// br-> 12
  uint8_t max_consecutive_empty_cols = 5;// br-> 13
  int current_consecutive_empty_cols = 0;
  bool is_active;

  for(int i = 0; i < NUM_COLS; i++)
  {

    // Start every column as not_active
    is_active = false;
    
    // Iterate over column to see if its active (any row in col is turned on)
    // TRUE if active, FALSE otherwise
    for(int j = 0; j < NUM_ROWS; j++)
    {
      is_active |= matrix[j][i]; // if any of the elements are TRUE, then is_active will latch to TRUE
    }

    // Empty column
    if (!is_active)
    {
      // Increment that we have found another empty columns
      current_consecutive_empty_cols++;

      // Check if we have reached the limit rof consecutive empty cols
      if (current_consecutive_empty_cols >= max_consecutive_empty_cols)
      {
        break;
      }
    }
    else
    {
      // We have found an active column! So, reset current count of empty cols
      current_consecutive_empty_cols = 0;
    }

    last_col++;
  }

  return last_col;
}


int get_last_active_column_from_end (bool (&matrix)[NUM_ROWS][NUM_COLS])
{

  // TODO: To solve this, we just have to find the first active column where we start from the end of the matrix


  // Start from the end
  int last_col = NUM_COLS - 1;

  bool is_active;

  // Interate backwards. Start at the last column
  for(int i = NUM_COLS - 1; i >= 0; i--)
  {

    // Start every column as not_active
    is_active = false;
    
    // Iterate over column to see if its active (any row in col is turned on)
    // TRUE if active, FALSE otherwise
    for(int j = 0; j < NUM_ROWS; j++)
    {
      is_active |= matrix[j][i]; // if any of the elements are TRUE, then is_active will latch to TRUE
    }

    #if (DEBUG == 1)    
      printf("col: %d -> %s\n", last_col, (is_active) ? "TRUE" : "FALSE");
    #endif

    // Empty column
    if (is_active)
      break;

    last_col--;
  }

  return last_col + 1; // Account for 0 index
}


void print_matrices_until_string_depleted(bool (&matrix)[NUM_ROWS][NUM_COLS])
{
	printf("\n\nPrint until string is all matrixed: \n");


  int board_index = 0; // Used for assigning matrices to a board or just a number
  int index_counter = 0; // Used for keeping track of col numbers

  int start_col = 0;
  int end_col = 0;

  int total_matrixes_needed = 0;

  int col_count = 0;

  clock_t t;
  t = clock();
  int last_column = get_last_active_column_from_front(matrix);
  t = clock() - t;

  printf("Last Active Column from Front took %f seconds: %d\n",((double)t)/CLOCKS_PER_SEC,last_column);

  t = clock();
  last_column = get_last_active_column_from_end(matrix);
  t = clock() - t;

  printf("Last Active Column from End took %f seconds: %d\n",((double)t)/CLOCKS_PER_SEC,last_column);

  printf("Results show that as the string gets larger, the last_col approach from the end is better\n");


  while (true)
  {

    // We done?
    if (end_col >= last_column)
      break;
      
    // Recalculate bounds
    start_col = board_index*COLS_PER_BOARD;
    end_col = board_index*COLS_PER_BOARD + COLS_PER_BOARD - 1;

    printf("Matrix for Board %d\n", board_index);
    for(int j = 0; j < NUM_ROWS; j++)
    {
      index_counter = 0;
      for(int k = 0; k <= NUM_COLS; k++)
      {
        if (index_counter >= start_col && index_counter <= end_col)
        {
          printf("%c", (matrix[j][k] == 1)?ON_:OFF_);
        }
        index_counter++;
        col_count++;
      }	
      printf("\n");
    }
    printf("\n");

    #if (DEBUG==1)
      printf("index_counter: %d\tlast_col_count: %d\tCurr_col_count: %d\n", index_counter,last_column,col_count);
    #endif
    // Increment for the next board
    board_index++;
  }
  
  printf("Total matrices/modules needed: %d\n", board_index+1);
	printf("\n");
}

void print_matrices_until_string_depleted_string_only_edition(char* str)
{

  // TODO: need to fix this such that it only takes the entire string rather than allocating the entire matrix in the heap

	printf("\n\nPrint until string is all matrixed but #_there_are_no_matrices_here: \n");

  int board_index = 0; // Used for assigning matrices to a board or just a number
  int string_length;

  char temp_char; // Stores current character we are processing
  bool temp_char_cell [CELL_HEIGHT][CELL_WIDTH]; // Stores matrix cell for temp_char's character matrix
  bool temp_board_module [ROWS_PER_BOARD][COLS_PER_BOARD]; // Stores current baord module matrix

  // Little null check
  if (!str)
    return;

  string_length = strlen(str);

  // Loop over all characters in the string
  for(int i = 0; i < string_length; i++)
  {

    // Take a character from the string
    temp_char = str[i];

    get_character_cell(temp_char, temp_char_cell);

    // Copy temp_char_cell into temp_board_module
    






    // Boards needed do be incremented here
    board_index++;
  }
  
  printf("Total matrices/modules needed: %d\n", board_index+1);
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

// TODO: This has to be updated.
// TODO: Does it? Does it really have to be updated?
void copy_column(bool (&dest)[NUM_ROWS][NUM_COLS], bool (&src)[CELL_HEIGHT][CELL_WIDTH], int column_index, int iteration, int starting_row){

  // Copy a single column from src array to destination array. 
  // Copy the column from src and put it in dest starting at the starting row in dest array

  #if (DEBUG == 1)
    printf("Curr column: %d\n", column_index);
  #endif

  for(int i = 0; i < CELL_HEIGHT; i++){
    if((starting_row+i) > (NUM_ROWS-1))
    {
      #if (DEBUG == 1)
        printf("poopy\n");
      #endif
      break;
    }
    dest[starting_row+i][column_index+iteration] = src[i][iteration];
    #if (DEBUG == 1)
      printf("i: %d  dest: %d  src: %d\n",i,dest[i+starting_row][column_index+iteration], src[i][iteration]);
    #endif
  }
}

// TODO: This has to be updated
// Return true if char can fit in matrix, otherwise return false
// Also, append the char to the matrix
bool append_char_to_matrix(char c, bool (&matrix)[NUM_ROWS][NUM_COLS], int* base_col, int iteration)
{
  // Append a single column SINGLE_COLUMN
  bool cell[CELL_HEIGHT][CELL_WIDTH];

  get_character_cell(c, cell);


  for(int i = 0; i < CELL_WIDTH; i++)
  {
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

    #if (DEBUG == 1)
      printf("Curr char: %c\n", str[i]);
    #endif

    if(!append_char_to_matrix(str[i], matrix, &base_col, i)){
      #if (DEBUG == 1)
        printf("\nReturning false from append_char_to_matrix\n");
      #endif
      return false;
    }
  }
  return true;
}

// Display the text thin
void display()
{
}
