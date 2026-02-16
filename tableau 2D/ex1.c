#include<stdio.h>
int main(){
    int i,j;
    float s,m;
    float note_etudient[6][2];
    for(i=0;i<6;i++){
        for(j=0;j<2;j++){
            printf("la note d'etude%d de matrier%d\t",i+1,j+1);
            scanf("%f",&note_etudient[i][j]);
        }
    }
    for(i=0;i<6;i++){
    s=0;
    for(j=0;j<2;j++){
    s=s+note_etudient[i][j];
    }
    m=s/2;
    printf("le moyen d'etude %dest%.2f\n",i,m);
    
    }
    return 0;
} 