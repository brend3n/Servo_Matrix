#ifndef COMMON_CODE_H_
#define COMMON_CODE_H_

// character in matrix
#include "character_matrices.h"

// Software libraries
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h> // cpp string library
#include <ctype.h>

// Hardware libraries
#include "Wire.h"
#include "Adafruit_PwmServoDriver.h"
#include "Arduino.h"



#define NUM_BOARDS 6

#define DELAY_BETWEEN_STRINGS_MS 5000 // 5 seconds

#define OFF_STATE 0   // PWM for off
#define ON_STATE 4095 // PWM for on

#define PWM_FREQ 0    // TODO: Set this accordingly
#define NUM_ROWS 10 
#define NUM_COLS 10

#define OFF 0         // OFF function pointer 2d array
#define ON  1         // ON function pointer 2d array

struct matrix_element
{
    uint8_t pin; // Pin on the driver
    Adafruit_PwmServoDriver driver_num; // Driver id
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
void get_character_cell(char ch, bool(&m)[CELL_HEIGHT][CELL_WIDTH]);


// Params: 
//        str <- string to print
//        matrix <- reference to matrix to fill
// Returns:
//        true <- if string can fit
//        false <- if string cannot fit
bool string_to_matrix(String str, bool (&matrix)[NUM_ROWS][NUM_COLS]);

// Show matrix
void display();


extern Adafruit_PwmServoDriver boards[NUM_BOARDS];
extern bool matrix[NUM_ROWS][NUM_COLS];
extern struct matrix_element matrix_ops[NUM_ROWS][NUM_COLS]; // This will change with new struct array
#endif

