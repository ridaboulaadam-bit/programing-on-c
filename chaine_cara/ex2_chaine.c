#include<stdio.h>
#include<string.h>
int main(){
char c[100];
char d[100];
int i;
printf("saisir une chaine de caracter:");
gets(c);
for(i=0;c[i]!='\0';i++)
    d[i]=c[i];

 d[i]='\0';

printf("c[]=%s\n",c);
printf("d[]=%s\n",d);
printf("total des cara copies:%d",i);


    return 0;
}