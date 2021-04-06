#include "detectCoul.h"
void detectCoul( detectType *resultat, pixelType pixIN ,int a )
{
	colorType  valR =pixIN.r;
	colorType  valG =pixIN.g;
	colorType  valB =pixIN.b;

	static int  cptR=0,cptG=0,cptB=0;

	cptR=((valR<valG)||(valR<valB))?cptR:cptR++;
	cptG=((valG<valR)||(valG<valB))?cptG:cptG++;
	cptB=((valB<valR)||(valB<valG))?cptB:cptB++;

	if (cptR>=cptB && cptR>=cptG)
	{
		*resultat=cptR;
	}
	else{
		if (cptB>=cptR && cptB>=cptG)
		{
			*resultat=cptB;
		}else{
			*resultat=cptG;
		}
	}
	if ((a+1)==LARGEUR*HAUTEUR)
	{
		cptG=cptB=cptR=0;
	}
	
}