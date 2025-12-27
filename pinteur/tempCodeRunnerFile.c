#include<stdio.h>
int main(){
int a,b;
int *p1,*p2;
p1=&a;
p2=&b;
printf(" donner la valeur de a:");
scanf("%d",p1);
printf("donner la valeur de b :");
scanf("%d",p2);
printf("a+b=%.2d\n",*p1+*p2);
printf("a-b=%.2d\n",*p1-*p2);
printf("p1*p2=%.2d",*p1 * *p2);

    return 0;
}

































