// determine le cara repete
#include<stdio.h>
#include<stdio.h>
int main(){
    char t[50];
    int frq[50];
    int i,j;
    int compteur;
    int max,indice;
    puts("saisir une chaine :");
    gets(t);
    for(i=0;i<strlen(t);i++)
    frq[i]=-1;
    for(i=0;i<strlen(t);i++){
        compteur=1;

        for(j=i+1;j<strlen(t);j++){
            if(t[i]=t[j]){
                compteur++;
                frq[j]=0;
            }
            
            }
            if(frq[0]!=0){
                frq[0]=compteur;
        

        }

    }
    max= frq[0];
    indice=0;
    for(i=1;i<strlen(t);i++){
        if(frq[i]>max){
            max=frq[i];
            indice=i;
        }
    }
    printf("le cara repete est:%c",t[indice]);


    return 0;
}