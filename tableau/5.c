#include<stdio.h>
int main(){
    int T[10],i,n,x;
    for(i=0;i<10;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
        
    }
    printf("saisir un entier:");
    scanf("%d",&n);
    x=0;
    
    for(i=0;i<10;i++){
        if(n==T[i])
        x++;
        
    }
   if(x==0)
   printf("%d ne se trouve pas dans tableau",n);
   else
   printf("%d se trouve dans le tableau",n);


    return 0;
}