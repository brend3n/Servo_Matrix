#ifndef CHARACTER_MATRICES_H
#define CHARACTER_MATRICES_H

#define CELL_WIDTH  5
#define CELL_HEIGHT 7

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


// Access array elements through enum
// enum characters_enum{
//   ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,
//   SPACE,CURSOR,COLON,PERIOD,LEFT_PAREN,RIGHT_PAREN,PLUS,
//   MULT,EQUAL,EXCLAM_POINT,QUESTION_MARK,MINUS,PERCENT,
//   COMMA,UNDERSCORE,AT_SIGN,
//   A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,
//   a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
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



// // Array for all character representations
// bool characters[][CELL_HEIGHT][CELL_WIDTH] = 
// {
//   {ZERO_cell},{ONE_cell},{TWO_cell},{THREE_cell},{FOUR_cell},{FIVE_cell},{SIX_cell},{SEVEN_cell},{EIGHT_cell},{NINE_cell},
//   {SPACE_cell},{CURSOR_cell},{COLON_cell},{PERIOD_cell},{LEFT_PAREN_cell},{RIGHT_PAREN_cell},{PLUS_cell},
//   {MULT_cell},{EQUAL_cell},{EXCLAM_POINT_cell},{QUESTION_MARK_cell},{MINUS_cell},{PERCENT_cell},
//   {COMMA_cell},{UNDERSCORE_cell},{AT_SIGN_cell},
//   {A_cell},{B_cell},{C_cell},{D_cell},{E_cell},{F_cell},{G_cell},{H_cell},{I_cell},{J_cell},{K_cell},{L_cell},{M_cell},{N_cell},{O_cell},{P_cell},{Q_cell},{R_cell},{S_cell},{T_cell},{U_cell},{V_cell},{W_cell},{X_cell},{Y_cell},{Z_cell},
//   {a_cell},{b_cell},{c_cell},{d_cell},{e_cell},{f_cell},{g_cell},{h_cell},{i_cell},{j_cell},{k_cell},{l_cell},{m_cell},{n_cell},{o_cell},{p_cell},{q_cell},{r_cell},{s_cell},{t_cell},{u_cell},{v_cell},{w_cell},{x_cell},{y_cell},{z_cell}
// };

// Array for all character representations
bool characters[][CELL_HEIGHT][CELL_WIDTH] = 
{
  ZERO_cell,ONE_cell,TWO_cell,THREE_cell,FOUR_cell,FIVE_cell,SIX_cell,SEVEN_cell,EIGHT_cell,NINE_cell,
  SPACE_cell,CURSOR_cell,COLON_cell,PERIOD_cell,LEFT_PAREN_cell,RIGHT_PAREN_cell,PLUS_cell,
  MULT_cell,EQUAL_cell,EXCLAM_POINT_cell,QUESTION_MARK_cell,MINUS_cell,PERCENT_cell,
  COMMA_cell,UNDERSCORE_cell,AT_SIGN_cell,
  A_cell,B_cell,C_cell,D_cell,E_cell,F_cell,G_cell,H_cell,I_cell,J_cell,K_cell,L_cell,M_cell,N_cell,O_cell,P_cell,Q_cell,R_cell,S_cell,T_cell,U_cell,V_cell,W_cell,X_cell,Y_cell,Z_cell,
  a_cell,b_cell,c_cell,d_cell,e_cell,f_cell,g_cell,h_cell,i_cell,j_cell,k_cell,l_cell,m_cell,n_cell,o_cell,p_cell,q_cell,r_cell,s_cell,t_cell,u_cell,v_cell,w_cell,x_cell,y_cell,z_cell
};

#endif
