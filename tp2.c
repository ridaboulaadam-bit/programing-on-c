 #include <stdio.h>
 #include<string.h>

int main(){
    char numero_reservation[20];
    float facture,nombre_nuit;
    char type_reservation[10];
  
    printf("entrer votre numero de reservation\n");
    scanf("%s",numero_reservation);
    printf("combien de nuit avez vous reserver\n");
    scanf("%f",&nombre_nuit);
    printf("quel type de chambre ou la suite avez vous reserver\n");
    scanf("%s",&type_reservation);
    
    if(strcmp(type_reservation,"simple")==0)
        facture=nombre_nuit*400;
      
     printf("le montant de votre facture est %.2f dh\n",facture);
        
        return 0;
    }