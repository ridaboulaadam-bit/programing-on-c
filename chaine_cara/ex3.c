 #include<stdio.h>
 #include<string.h>
 int main(){
    char c[100];
    printf("saisir une chaine de caractere:");
    scanf("%c",&c);
    gets(c);
    puts("la chaine est:\n");
    puts(c);


    return 0;
 }