#include<stdio.h>
#include<string.h>
int main(){
    char b[50];
    puts("saisir une chaine caractere:");
    gets(b);
   printf("l'inverce est %s",strrev(b));

    return 0;
}