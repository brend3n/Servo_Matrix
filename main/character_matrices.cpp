#include "character_matrices.h"

// Template for a character
// char NAME [CELL_HEIGHT][CELL_WIDTH] = {
//     {},
//     {},
//     {},
//     {},
//     {},
//     {},
//     {},
// };


/*Uppercase*/
bool A_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1}
};

bool B_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0}
};

bool C_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool D_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0}
};
bool E_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1}
};
bool F_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0}
};
bool G_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool H_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1}
};
bool I_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,1,1,1,0}
};
bool J_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool K_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,1,0},
    {1,0,1,0,0},
    {1,1,0,0,0},
    {1,0,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1}
};
bool L_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1}
};
bool M_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,1,0,1,1},
    {1,0,1,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1}
};
bool N_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1}
};
bool O_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool P_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0}
};
bool Q_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {0,1,1,1,1}
};
bool R_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1}
};
bool S_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool T_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0}
};
bool U_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool V_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0}
};
bool W_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,1,0,1,1},
    {1,0,0,0,1}
};
bool X_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1}
};
bool Y_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0}
};
bool Z_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {0,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1}
};

/*Lowercase*/
bool a_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {0,0,0,1,0},
    {0,1,1,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0}
};
bool b_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,1,1,0,0}
};
bool c_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,0},
    {1,0,0,1,0},
    {0,1,1,0,0}
};
bool d_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,1,1,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0}
};
bool e_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {0,1,1,1,0}
};
bool f_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,1,0},
    {0,1,0,0,0},
    {1,1,1,1,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0}
};
bool g_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,1,1,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0},
    {0,0,0,1,0},
    {1,1,1,0,0}
};
bool h_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0}
};
bool i_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0}
};
bool j_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,0,0}
};
bool k_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0}
};
bool l_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0}
};
bool m_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,0},
    {1,0,1,0,1},
    {1,0,1,0,1},
    {1,0,1,0,1},
    {1,0,1,0,1}
};
bool n_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0}
};
bool o_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,0,0}
};
bool p_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,1,1,0,0},
    {1,0,0,0,0}
};
bool q_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,1,1,1},
    {0,1,0,0,1},
    {0,1,0,0,1},
    {0,0,1,1,1},
    {0,0,0,0,1}
};
bool r_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0}
};
bool s_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,1,0},
    {1,0,0,0,0},
    {0,1,1,0,0},
    {0,0,0,1,0},
    {1,1,1,0,0}
};
bool t_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,1,0,0,0},
    {1,1,1,1,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,0,1,1,0}
};
bool u_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0}
};
bool v_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0}
};
bool w_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {0,1,0,1,0}
};
bool x_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0}
};
bool y_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0},
    {0,0,0,1,0},
    {1,1,1,0,0}
};
bool z_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0}
};



/*Digits*/
bool ZERO_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,1,1},
    {1,0,1,0,1},
    {1,1,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool ONE_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,1,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,1,1,1,0}
};
bool TWO_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,1,1,1,1}
};
bool THREE_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {0,0,0,0,1},
    {0,0,1,1,0},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool FOUR_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,1,0},
    {0,0,1,1,0},
    {0,1,0,1,0},
    {1,0,0,1,0},
    {1,1,1,1,1},
    {0,0,0,1,0},
    {0,0,0,1,0}
};
bool FIVE_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {1,1,1,1,0}
};
bool SIX_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool SEVEN_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,0}
};
bool EIGHT_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};
bool NINE_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,1},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
};


/*Additional*/
bool SPACE_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0}
};
bool CURSOR_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1}
};
bool COLON_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0}
};
bool PERIOD_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0}
};
bool LEFT_PAREN_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,0,1,0,0}
};
bool RIGHT_PAREN_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,1,0,0}
};
bool PLUS_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {1,1,1,1,1,},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0}
};
bool MULT_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,0},
    {1,0,0,0,1},
    {0,0,0,0,0}
};
bool EQUAL_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {0,0,0,0,0}
};
bool EXCLAM_POINT_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0}
};
bool QUESTION_MARK_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,0,1,1,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0}
};
bool MINUS_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0}
};
bool PERCENT_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {1,1,0,0,1},
    {1,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,1},
    {1,0,0,1,1},
    {0,0,0,0,0}
};
bool COMMA_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,1,0,0,0}
};
bool UNDERSCORE_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,1,0}
};
bool AT_SIGN_cell [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,1,1,1},
    {1,0,1,0,1},
    {1,0,1,1,1},
    {1,0,0,0,0},
    {0,1,1,1,1}
};

bool SINGLE_COLUMN [CELL_HEIGHT][1] = {
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0}
};
