// ex10
#include<stdio.h>
int main(){
   float a;
   printf("saisir un nombre:");
   scanf("%f",&a);
   switch ()

   {
   case '6':printf(" personage va a droite");
      break;
      case '4':printf("va a gauche");
      break;
      case '8':printf("va en haut");
      break;
      case '2':printf("va en bas");
      break;
   
   default: printf("ne bouge pas");
      break;
   }
   return 0;
}