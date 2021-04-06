#include <stdio.h>
#include "seuilCoul.h"

int main () {
  FILE *fpTest , *fpRes;
  
  fpTest=fopen("fichierTest.ppm","r+");
  fpRes=fopen("fichierRes.ppm","w");
  
  int  r,g,b;
  pixelType in,out;
  
  for (int a = 0; a < LARGEUR*HAUTEUR;a++)
  {
 
    fscanf(fpTest,"%d",&r);
    fscanf(fpTest,"%d",&g);
    fscanf(fpTest,"%d",&b);

    in.r=r;
    in.g=g;
    in.b=b;
    
    seuilCoul(&out, in);
    fprintf(fpRes,"%d\n",out.r);
    fprintf(fpRes,"%d\n",out.g);
    fprintf(fpRes,"%d\n",out.b);
  }
  fclose(fpRes);
  fclose(fpTest);
  
  printf ("Comparing against output data \n");
  if (system("diff -w fichierRes.ppm fichierGOLD.ppm")) {

	fprintf(stdout, "*******************************************\n");
	fprintf(stdout, "FAIL: Output DOES NOT match the golden output\n");
	fprintf(stdout, "*******************************************\n");


     return 1;
  } else {
	fprintf(stdout, "*******************************************\n");
	fprintf(stdout, "PASS: The output matches the golden output!\n");
	fprintf(stdout, "*******************************************\n");
  

    return 0;
  }
}
