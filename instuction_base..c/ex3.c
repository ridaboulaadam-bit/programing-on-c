// ex3  puissance
#include <stdio.h>
 #include <math.h> 
int main(){
    
   float x,y,pui;
   printf("saisir la valeur de x:");
   scanf("%f",&x);
   prinf("saisir la valeur de y:");
   scanf("%f",&y);
   pui=pow(x,y);
   printf(" puissance est:%.2f\n",pui);

   return 0;
}
