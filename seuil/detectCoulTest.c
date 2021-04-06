#include <stdio.h>
#include "detectCoul.h"

int main () {
  FILE *fpTest , *fpRes;
  
  fpTest=fopen("fichierTest.ppm","r+");
  
  int  r,g,b;
  pixelType in,out;
  detectType resultat;
  for (int a = 0; a < LARGEUR*HAUTEUR;a++)
  {
 
    fscanf(fpTest,"%i",&r);
    fscanf(fpTest,"%i",&g);
    fscanf(fpTest,"%i",&b);

    in.r=r;
    in.g=g;
    in.b=b;
    
    detectCoul(&resultat, in,a);
    printf("\t %d :: %d \n",a ,resultat );
  }
  fclose(fpTest);
  

}


