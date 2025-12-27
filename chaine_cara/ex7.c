#include<stdio.h>
#include<string.h>
int main(){
    char H[20];
    char J[20];
    puts( "saisir une chaine:");
    gets(H);
    puts("saisir une chaine:");
    gets(J);
    printf("la nouvelle chaine est:%s",strcat(J,H));
    

    return 0;
}