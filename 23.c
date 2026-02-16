#include<stdio.h>
int main(){
   int i;
    int n[6];
   for(i=0;i<=6;i++){

   
   printf("n=");
   scanf("%d",&n[i]);
   
   if(n[i]<10)
   printf("non valide\n");
   else if(n[i]>=10 && n[i]<20)
   
   printf("valide\n");
   else
   printf("inpossible\n");
}
    return 0;

}