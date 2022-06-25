#ifndef COMMON_CODE_H_
#define COMMON_CODE_H_

#include "character_matrices.h"

// Software libraries
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h> // cpp string library
#include <ctype.h>


// Hardware libraries
// #include "Wire.h"
// #include <Adafruit_PWMServoDriver.h>



#define NUM_BOARDS 6
#define NUM_MODULES 3 // Adjust this to match the number of modules are being used

#define DELAY_BETWEEN_STRINGS_MS 5000 // 5 seconds

#define OFF_STATE 0   // PWM for off
#define ON_STATE 4095 // PWM for on

#define PWM_FREQ 0    // TODO: Set this accordingly
#define NUM_ROWS 10 * 2
#define NUM_COLS 10 * 2

#define OFF 0         // OFF function pointer 2d array
#define ON  1         // ON function pointer 2d array

struct matrix_element
{
    uint8_t pin; // Pin on the driver
    uint8_t driver_num; // Driver id
};

// Typedef for function pointers
typedef void (*matrix_write)(uint8_t, uint8_t, uint8_t);

// Sets all of the pins either on or off
// Params: state: pass in either ON or OFF
void set_all(uint8_t state);

// Writes a state (ON or OFF) to a pin on a given board
void write_element(uint8_t board_index, uint8_t pin, uint8_t state);

// Sets up function pointer 3d array
void init_fp_matrix();

// Sets the passed in matrix cell to the desired character.
void get_character_cell(char ch, bool (&cell)[CELL_HEIGHT][CELL_WIDTH]);

// Sets all elements to zero
void zero_out_matrix(bool (&matrix)[NUM_MODULES][NUM_ROWS][NUM_COLS]);


// Return true if char can fit in matrix, otherwise return false
// Also, append the char to the matrix
bool append_char_to_matrix(char c, bool (&matrix)[NUM_MODULES][NUM_ROWS][NUM_COLS]);

// Params: 
//        str <- string to print
//        matrix <- reference to matrix to fill
// Returns:
//        true <- if string can fit
//        false <- if string cannot fit
bool string_to_matrix(char* str, bool (&matrix)[NUM_MODULES][NUM_ROWS][NUM_COLS]);

// Show matrix
void display();

// extern Adafruit_PWMServoDriver boards[NUM_BOARDS];
extern bool matrix_l[NUM_ROWS][NUM_COLS];
extern struct matrix_element matrix_ops[NUM_ROWS][NUM_COLS]; // This will change with new struct array

#endif

