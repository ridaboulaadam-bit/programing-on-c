#include<stdio.h>
#include<stdlib.h>

int main(){
int *p=malloc(4*sizeof(int));
*(p+0)=9;
*(p+1)=95;
*(p+2)=19;
*(p+3)=12;
return 0;
}