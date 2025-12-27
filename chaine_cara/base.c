// declaration
   char chaine[4]={'r','e','d','a','\0'};
         // ou
  char chaine[]={'r','e','d','a','\0'};
         // ou
  char chaine[4]="reda";
  char chaine[]="reda";

//   affectation:  chaine[4]='n';

// chaine const

char *chaine="hello"; 
// ou
char *chaine;
chaine="hello";

//   affichage et lecture
char c[]="ali";
// printf("%c",c[2]);===i

printf("%s",c);

scanf("%s",c);

gets(c);// utilise pour affiche les monte entre espace ou apre l'epace
puts(c);//utilise pour affiche automatiquement sans print

// |||||||| FONCTION SUR CHAINE CARA////

#include<string.h> //biblitiotec de chaine cara

strlen()     //fonction  calcule de taille de cara
// ex:
// char c[]="ali";
// int n=strlen(c);
// printf("%d",n);// qui affeche 3


strcpy(); // copier une chaine a autre chaine
// ex:
// char c[]="ali";
// char d[];
// strcpy(d,c);
// puts(d)//affiche :ali
strncpy() //copie un nombre des cara

// ex:
// char c[]="ali";
// char d[];
// strcpy(d,c,2);
// puts(d)//affiche :al

strcat() //ajout une chaine a la fin d'autre chaine
// ex
// char c[]="ali";
// char d[10]="amine";
// strcat(d,c);//affiche:amine ali

strncat()


strcmp()  // compare 2chaine    
    //   ex  
    // char a[]="ali";
    // char b[]="ali";
    // char c[] ="amine";
    // printf("%s",strcmp(a,b));
    // printf("%s";strcmp(a,c));

    strchr() //cherche le premier ocurence et affiche les cara apres 

// ex:
// char a[]="hello world";
// printf("%s",strchr(a,w))//affiche: world


strrchr(); //cherche de sens inverse
// ex
// char a[]="hello world";
// printf("%s",strchr(a,l)); //affiche: ld


strrev()//inverser la chaine
//  char p[]="reda";
//  printf("%s",strrev(a)); //affiche: adre;

 strlwr()//affiche en majescul

 strupr()//en miniscul
 