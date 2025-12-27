#include<stdio.h>
int main(){
    int n,*p;
    p=&n;
    printf("saisir un nombre :");
    scanf("%d",p);
    if(*p % 2==0)
printf("%.2d  est pair",*p);
else 
printf("%.2d est impair",*p);



    return 0;
}