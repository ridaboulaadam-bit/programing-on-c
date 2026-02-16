#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    float s,m;
    printf("saisir element de tableau:");
    scanf("%d",&n);
    float *q=calloc(n,sizeof(float));
    if(q==NULL){
printf("memoire n'est pas alloues.\n");
exit(0);
    }
else {
    i=0;
    while (i<=n)
    {
        printf("T[%d]=",i);
        scanf("%f",q);
        i++;
    }
    s=0;
    for(i=0;i<=n;i++){
        s=s+*q;
    }
    printf("la somme l'elements est:%.2f",s);
    m=s/n;
    printf("le moyene est:%.2f",m);
}
  return 0;
}
