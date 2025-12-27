// ex4
#include<stdio.h>
int main(){
    float U[3],V[3],p;
    int i;
    for(i=0;i<3;i++){
        printf("U[%d]=",i);
        scanf("%f",&U[i]);
        printf("V[%d]=",i);
        scanf("%f",&V[i]);

    }
p=0;
for(i=0;i<3;i++)
p=p+U[i]*V[i];

printf("p=%.2f",p);
    return 0;
}