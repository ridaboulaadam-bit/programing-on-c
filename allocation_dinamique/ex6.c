#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int *n=malloc(sizeof(int));
    int *s=malloc(sizeof(int));
    printf("saisir un nonbre:");
    scanf("%d",n);
i=1;
    while (i<*n)
    {
        *s=2;
        *s=*s+i;
        i+=2;
    }
    printf("la somme des nombres impair de n:%d",*s);
    
    


    return 0;
}