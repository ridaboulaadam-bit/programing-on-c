#include<stdio.h>
int factoriel(int n){
    int F,i;
    if(n==0 ||n==1)
    F=1;
    else{
        F=1;
        for(i=2;i<=n;i++){
            
            F=F*i;
            
        }
    }
    return F;
}
int main(){
    int n;
    printf("saisir un nombre");
    scanf("%d",&n);
    printf("le factoriel de %d est%d",n,factoriel(n));
}