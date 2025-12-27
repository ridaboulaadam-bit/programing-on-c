#include<stdio.h>
#include<stdio.h>
int main(){
    char c[100],d[100];
    int i,n=0;
    printf("saisir une chaine:");
   gets(c);
    printf("saisir une chaine:");
   gets(d);
    if (strlen(c)!=strlen(d))
    {
      printf("les mots sont different longeur");
            
         }
        else{
        
   for(i=0;i<= strlen(c);i++){
            if (c[i]!=d[i])
            n++;
    }
    printf("la distance d'hammming est:%d",n);

}
    return 0;
}