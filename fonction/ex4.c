#include<stdio.h>
// void premier(int n){
//     int i,p;
//     p=1;
//     for(i=2;i<=n/2;i++){
//     if(n%i==0){
//         p=0;
//         break;
//     }
//     }
//     if(p==1)
//     printf("%dest nombre premier\n",n);
//     else 
//     printf("%d est nonmbre non premier\n",n);
// }
// int main(){
//     int a;
//     printf("donner valeur de a:");
//     scanf("%d",&a);
//     premier(a);
//     return 0;
// }

// |||||||||||||nombre des fiche|||||||||
int nbr_chiffre(long d){
int nbr;
nbr=0;
do
{
    d=d/10;
    nbr++;
} while (d!=0);


    return nbr;
}

int main(){
    long w;
    printf("saisir un nombre:");
    scanf("%d",&w);
printf("le nombre de chiffre de%d est:%d",w,nbr_chiffre(w));
    return 0;
}