#include "seuilCoul.h"
void seuilCoul( pixelType *pixOut, pixelType pixIN)
{
	colorType  valR =pixIN.r;
	colorType  valG =pixIN.g;
	colorType  valB =pixIN.b;
	colorType resR,resG,resB;

	resR=((valR<valG)||(valR<valB))?0:valR;
	resG=((valG<valR)||(valG<valB))?0:valR;
	resB=((valB<valR)||(valB<valG))?0:valB;
	pixOut->r=resR;
	pixOut->g=resG;
	pixOut->b=resB;
}