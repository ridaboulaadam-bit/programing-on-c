// ex3
#include<stdio.h>
int main(){
    float T[10];
    int i;
    float s,p,m;
    printf("saisir element du tableau");
    for(i=0;i<10;i++){
        printf("T[%d]=",i);
    scanf("%f",&T[i]);
    }
    s=0;
    p=1;
    for (i=0;i<10;i++){
        s=s+T[i];
        p=p*T[i];
        
    }
    m=s/10;
    printf("s=%.2f",s);
    printf("p=%.2f",p);
    printf("m=%.2f",m);

    return 0;
}
