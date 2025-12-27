
// ex10 :\\\\\\\\\\\\\\\\\\--------jeu--------/////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int n;
    int ne=0;
    int nt=0;
    int estcorrect=0;
    const int max=30,min=1;
    srand(time(NULL));
    n=(rand() % (max-min+1))+min;
    printf("l'ordinateur choisir un nombre enter 1et30");
    do{
        nt++;
        printf("quel le nombre?");
        scanf("%d",&ne);
       if(n<ne){
            printf("plus grand\n");
       }
        else if(n>ne)
        printf("petite\n");
        else{
        estcorrect=1;
        break;
        }

    }while(nt<5);
    if(estcorrect==1)
    printf("bravo");
    else
    printf("opps");


    return 0;
}

