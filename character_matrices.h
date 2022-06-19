#ifndef CHARACTER_MATRICES_H
#define CHARACTER_MATRICES_H

#define CELL_WIDTH  5
#define CELL_HEIGHT 7
enum characters{
    a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,
    A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
};

// Template for a character
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};

/*Uppercase*/
char A [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1}
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1}
};

char B [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
};

char C [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
char D [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
};
char E [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1},
};
char F [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
};
char G [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
char H [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
};
char I [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,1,1,1,0},
};
char J [CELL_HEIGHT][CELL_WIDTH] = {
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
char K [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,1,0},
    {1,0,1,0,0},
    {1,1,0,0,0},
    {1,0,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1},
};
char L [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1},
};
char M [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,1,0,1,1},
    {1,0,1,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
};
char N [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
};
char O [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
char P [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
};
char Q [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {0,1,1,1,1},
};
char R [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1},
};
char S [CELL_HEIGHT][CELL_WIDTH] = {
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
char T [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
};
char U [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
};
char V [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
};
char W [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,1,0,1,1},
    {1,0,0,0,1},
};
char X [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
};
char Y [CELL_HEIGHT][CELL_WIDTH] = {
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
};
char Z [CELL_HEIGHT][CELL_WIDTH] = {
    {1,1,1,1,1},
    {0,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1}
    
/*Lowercase*/
char a [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char b [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char c [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char d [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char e [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char f [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char g [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char h [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char i [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char j [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char k [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char l [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char m [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char n [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char o [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char p [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char q [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char r [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char s [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char t [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char u [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char v [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char w [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char x [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char y [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char z [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};



/*Digits*/
char ZERO [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char ONE [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char TWO [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char THREE [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char FOUR [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char FIVE [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char SIX [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char SEVEN [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char EIGHT [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NINE [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};


/*Additional*/
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
char NAME [CELL_HEIGHT][CELL_WIDTH] = {
    {},
    {},
    {},
    {},
    {},
    {},
    {},
};
 





#endif