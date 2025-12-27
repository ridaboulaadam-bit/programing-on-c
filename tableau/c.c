#include<stdio.h>
int main(){
    int T[10],i,min;
    for(i=0;i<10;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    min=T[0];
    for(i=0;i<10;i++){
        if (min>T[i])
        
            min=T[i];  
    }
    printf("le min est:%d",min);
    return 0;
}