//  ex5 
#include<stdio.h>
int main(){
    float N1,N2,N3,M;


     prinf("entrer la note N1 :");
     scanf("%f",&N1);
     prinf("entrer la note N2 :");
     scanf("%f",&N2);
     prinf("entrer la note N3 :");
     scanf("%f",&N3);
     M=(N1+N2+N3)/3;
     prinf("la moyene est:%2.f",M);
     if(M<10)
     pintf("lnsuffisant");
   else if(M>=10 && M<12)
   prinf("passable");
   else if(M>=12 && M<14)
   prinf("asser bient");
   else if(M>=14 && M<16)
   prinf(" montion bien");

   else if(M>=16)
   prinf("montion tres bient");

   return 0;
}