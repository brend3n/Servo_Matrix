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
enum characters_enum{
  ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,
  SPACE,CURSOR,COLON,PERIOD,LEFT_PAREN,RIGHT_PAREN,PLUS,
  MULT,EQUAL,EXCLAM_POINT,QUESTION_MARK,MINUS,PERCENT,
  COMMA,UNDERSCORE,AT_SIGN,
  A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,
  a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
};

// Array for all character representations
bool characters[][CELL_HEIGHT][CELL_WIDTH] = 
{
  ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,
  SPACE,CURSOR,COLON,PERIOD,LEFT_PAREN,RIGHT_PAREN,PLUS,
  MULT,EQUAL,EXCLAM_POINT,QUESTION_MARK,MINUS,PERCENT,
  COMMA,UNDERSCORE,AT_SIGN,
  A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,
  a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
};

/*Uppercase*/
bool A [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1}
};

bool B [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
};

bool C [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool D [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
};
bool E [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1},
};
bool F [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
};
bool G [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool H [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
};
bool I [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,1,1,1,0},
};
bool J [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool K [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,1,0},
    {1,0,1,0,0},
    {1,1,0,0,0},
    {1,0,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1},
};
bool L [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1},
};
bool M [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,1,0,1,1},
    {1,0,1,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
};
bool N [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
};
bool O [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool P [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
};
bool Q [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {0,1,1,1,1},
};
bool R [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1},
};
bool S [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool T [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
};
bool U [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool V [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
};
bool W [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,1,0,1,1},
    {1,0,0,0,1},
};
bool X [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
};
bool Y [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
};
bool Z [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {0,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1}
};

/*Lowercase*/
bool a [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {0,0,0,1,0},
    {0,1,1,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0},
};
bool b [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,1,1,0,0},
};
bool c [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,0},
    {1,0,0,1,0},
    {0,1,1,0,0},
};
bool d [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,1,1,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0},
};
bool e [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {0,1,1,1,0},
};
bool f [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,1,0},
    {0,1,0,0,0},
    {1,1,1,1,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
};
bool g [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,1,1,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0},
    {0,0,0,1,0},
    {1,1,1,0,0},
};
bool h [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
};
bool i [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
};
bool j [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,0,0},
};
bool k [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
};
bool l [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
};
bool m [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,0},
    {1,0,1,0,1},
    {1,0,1,0,1},
    {1,0,1,0,1},
    {1,0,1,0,1},
};
bool n [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
};
bool o [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,0,0},
};
bool p [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,1,1,0,0},
    {1,0,0,0,0},
};
bool q [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,1,1,1},
    {0,1,0,0,1},
    {0,1,0,0,1},
    {0,0,1,1,1},
    {0,0,0,0,1},
};
bool r [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
};
bool s [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,1,0},
    {1,0,0,0,0},
    {0,1,1,0,0},
    {0,0,0,1,0},
    {1,1,1,0,0},
};
bool t [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,1,0,0,0},
    {1,1,1,1,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,0,1,1,0},
};
bool u [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0},
};
bool v [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
};
bool w [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {0,1,0,1,0},
};
bool x [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
};
bool y [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,1,0},
    {0,0,0,1,0},
    {1,1,1,0,0}
};
bool z [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
};



/*Digits*/
bool ZERO [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,1,1},
    {1,0,1,0,1},
    {1,1,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool ONE [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,1,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,1,1,1,0},
};
bool TWO [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,1,1,1,1},
};
bool THREE [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {0,0,0,0,1},
    {0,0,1,1,0},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool FOUR [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,1,0},
    {0,0,1,1,0},
    {0,1,0,1,0},
    {1,0,0,1,0},
    {1,1,1,1,1},
    {0,0,0,1,0},
    {0,0,0,1,0},
};
bool FIVE [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {1,1,1,1,0},
};
bool SIX [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool SEVEN [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,0},
};
bool EIGHT [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
bool NINE [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,1},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};


/*Additional*/
bool SPACE [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
};
bool CURSOR [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
    {1,1,1,1,1},
};
bool COLON [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
};
bool PERIOD [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
};
bool LEFT_PAREN [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0},
    {0,0,1,0,0},
};
bool RIGHT_PAREN [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,1,0,0},
};
bool PLUS [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {1,1,1,1,1,},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
};
bool MULT [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,0},
    {1,0,0,0,1},
    {0,0,0,0,0},
};
bool EQUAL [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {0,0,0,0,0},
};
bool EXCLAM_POINT [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
};
bool QUESTION_MARK [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,0,1,1,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
};
bool MINUS [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
};
bool PERCENT [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {1,1,0,0,1},
    {1,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,1},
    {1,0,0,1,1},
    {0,0,0,0,0},
};
bool COMMA [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
};
bool UNDERSCORE [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,1,1,1,0},
};
bool AT_SIGN [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,1,1,1},
    {1,0,1,0,1},
    {1,0,1,1,1},
    {1,0,0,0,0},
    {0,1,1,1,1},
};
#endif