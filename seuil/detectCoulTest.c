#include <stdio.h>
#include "detectCoul.h"

int main () {
  FILE *fpTest , *fpRes;
  
  fpTest=fopen("/home/rodney/Documents/code/AAP-image-main/seuil/fichierTest.ppm","r+");
  
  int  r,g,b;
  pixelType in,out;
  detectType resultat;
  int a ;
  printf("true== %d false == %d \n",true,false);
  for (a = 0; a < LARGEUR*HAUTEUR;a++)
  {
 
    fscanf(fpTest,"%i",&r);
    fscanf(fpTest,"%i",&g);
    fscanf(fpTest,"%i",&b);

    in.r=r;
    in.g=g;
    in.b=b;
    
    detectCoul(&resultat, in,a);
    //printf("\t %d :: %d \n",a ,resultat );
  }
  printf("\t pixel n° :: %d  valeur :: %d \n",a ,resultat );
  fclose(fpTest);
  

}


