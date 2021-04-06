#include <ap_cint.h>
#define LARGEUR 400
#define HAUTEUR 268

typedef uint8 colorType;
typedef struct 
{
	colorType r;
	colorType g;
	colorType b;
}pixelType;


void seuilCoul( pixelType *pixOut, pixelType pixIN);
