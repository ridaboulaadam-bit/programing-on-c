#include<stdio.h>
int main(){
    int n[5];
    int*p,i;
    p=&n[i];
    for(i=0;i<=5;i++){
    printf("n%d=",i);
    scanf("%d",p);
    
    printf("n%d=",i,*p+3);
    }
    return 0;
}