//  ex7
#include<stdio.h>
int main(){
   int ag;
   char se;
   prinf("l'age est:");
   scanf("%d",&ag);
   printf("le sexe de habitant est:");
   scanf("%c",&se);
   if((se=='h'&& ag>=20) || (se='f' && ag>=18 && ag <=35)){
      prinf(" habitant est imposable");

   }
   else 
   prinf("habitant est:non imposable");

   return 0;
}


