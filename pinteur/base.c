// |||||||||||\ pointeur/||||||||||||
// exemple
#include<stdio.h>
// int main(){
// int a=2;
// int *p; 
// p=&a;
// printf("%d",*p);

//  return 0;
// }
// // ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ////////////////////////
// // declarationde*p
// int a;             
// int*P=&a;
// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// exemple
void max(int*x,int *y , int *m){
if (*x>*y)

   *m=*x;
   else
   *m=*y;



}
int main (){
 int a,b,ma;
 printf("valeur de a:\n b: ");
 scanf("%d%d",&a,&b);
 max(&a,&b,&ma);

 printf("le max est: %d",ma);
    
    return 0;
}