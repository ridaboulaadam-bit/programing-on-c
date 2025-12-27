//  ex2  calcule surface et perimetre
#include<stdio.h>
int main(){
    float L,l,s,p;
    printf("donner la largeur:");
    scanf("%f",&l);
    printf("donner la longueur:");
    scanf("%f",&L);
 s=l*L;
 printf("la surface est:%.2f \n",s);
 p=(l+L)*2;
//  %2f :عدد الارقام خلف الفاصلة
 printf("le perimetre est:%.2f\n",p);
 
   return 0;
}