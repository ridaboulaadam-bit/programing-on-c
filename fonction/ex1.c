// ||||||||--function:---||||||
// tableau_multiplication:

#include<stdio.h>
void tab_multipl(int n){
    int i ;
    printf(" le tab de mult de %d:\n",n);

    for(i=0;i<=9;i++)
   printf("%d*%d=%d\n",n,i,n*i);
}
int main(){
    int i,x;
    printf("saisir un entier positive:");
    scanf("%d",&x);
    tab_multipl(x);

    return 0;
}