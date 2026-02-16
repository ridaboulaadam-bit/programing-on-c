#include<stdio.h>
#include<stdlib.h>
int main(){
float prix_revient;
    float prix_vente;
    float *p=malloc(sizeof(float));
    printf("saisir le prix de revient:");
    scanf("%f",&prix_revient);
    printf("saisir le prix de vente");
    scanf("%f",&prix_vente);
    if(prix_revient>prix_vente){
        *p=prix_revient -prix_vente;


    printf("perte=%.2f",*p);

    }
    else{
        *p=prix_revient-prix_vente;
        
    printf("profit= %.2f",*p); 
    }
    


    return 0;
}