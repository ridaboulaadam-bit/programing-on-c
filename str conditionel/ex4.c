#include<math.h>
#include<stdio.h>

int main(){

   float Xa,Xb,Ya,Yb,AB; 
   printf("entrer le coordonnee de X de A ");
   scanf("%f",Xa);
   printf("entrer le coordonnee de X de A ");
   scanf("%f",Ya);
    printf("entrer le coordonnee de X de B ");
   scanf("%f",Xb);
    printf("entrer le coordonnee de Y de B ");
   scanf("%f",Yb);
   // sqrt دلة للجذر مربع
   AB=sqrt(pow(Xb-Xa,2)+pow(Yb-Ya,2));

   printf("la distance est:%2f\n",AB); 
   return 0;
}