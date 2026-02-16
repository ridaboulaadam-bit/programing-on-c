#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a=malloc(3*sizeof(int));
    printf("%d\n",*(a+0));
     printf("%d\n",*(a+1)); 
      printf("%d\n",*(a+2));
    *(a+0)=13;
    *(a+1)=88;
    *(a+2)=123;
    printf("%d\n",*(a+0));
     printf("%d\n",*(a+1)); 
      printf("%d\n",*(a+2));

    int*e=calloc(3,sizeof(int));
     printf("%d\n",*(e+0));
      printf("%d\n",*(e+1));
       printf("%d\n",*(e+2));
       *(e+0)=5;
    
       *(e+1)=1;
       *(e+2)=33;
        printf("%d\n",*(e+0));
      printf("%d\n",*(e+1));
       printf("%d\n",*(e+2));


    return 0;
}