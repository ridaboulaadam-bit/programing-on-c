// annee bissextill كبيسة
#include<stdio.h>
 void bissextil(int a){
    
    if(a %400==0 || (a%4==0 && a%100!=0))
    printf("annee est bissextil\n");
    else 
    printf("annee n'est pas bissextile");


 }
int main(){

 int annee;
 printf("saisir une annee");
 scanf("%d",&annee);
 bissextil(annee);
    return 0;

}