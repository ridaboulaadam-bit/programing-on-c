// |||||||||||||||||||||||||~~~gestion d'un hotel~~~|||||||||||||||||||||||||||||||||||
 #include<stdio.h>
 #include<string.h>
 void client_information(){
    char nom[20];
    char prenom[20];
    char age[20];
    char gmail[20];
    char cin[20];
    char numero[20];
    printf("entrer votre non\n");
    scanf("%s",nom);
    printf("entrer votre prenom\n");
    scanf("%s",prenom);
    printf("entrer votre age\n");
    scanf("%s",age);
    printf("entrer votre gmail\n");
    scanf("%s",gmail);
    printf("entrer votre cin\n");
    scanf("%s",cin);
    printf("entrer votre numero\n");
    scanf("%s",numero);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
}
void gestion_client(){
     printf("********** menu ************    \n");
     printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("1-reserver une chambre\n");
    printf("2-reserver une suite\n");
    printf("3-annuler une reservation\n");
    printf("4-demander une facture\n");
    printf("5-demander une assistance\n");
    printf("6-contacter le service client\n");
    printf("7-quitter\n");

}
 void gestion_admin(){
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~ menu ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  \n");
    printf("~~1-ajouter un client dans une chambre~~\n");
    printf("~~2-ajouter un client dans une suite  ~~\n");
    printf("~~3-afficher la facture de client     ~~\n");
    printf("~~4- afficher les chambres et suites disponible       ~~\n");
    printf("~~5-quitter                           ~~\n");
}
// ||||||||||||||||||||||||\\\ menu de client ///|||||||||||||||||||||||||||||||||||||
// ================
void reserver_chambre(){
    char typr_chambre[20];
    char date_arrivee[10];
    char date_depart[10];
    
    printf("entrer le type de chambre que vous voulez reserver\n");
    scanf("%s",typr_chambre);
    if(strcmp(typr_chambre,"simple")==0){
        printf("vous avez reserver une chambre simple\n");
        printf("le prix de chambre simple est de 400dh par nuit\n");
    }
    else if(strcmp(typr_chambre,"double")==0){
    printf("vous aver reserver une chambre double\n");
    printf("le prix de chambre doble est de 700dh par nuit\n");
    }
    else
    printf("type de chambre invalider\n");
 
  printf("la date de depart\n");
    scanf("%s",date_depart);
    printf("entrer la date d'arrivee\n");
    scanf("%s",date_arrivee);
    printf("vous avez reserver une chambre du %s au %s\n",date_arrivee,date_depart);
}
    // methode de paiement
void methode_paiement(){
    int choix;
    char paiement[20];
    printf("methode de paiment\n");
    printf("1-visa\n");
    printf("2-mastercard\n");
    printf("3-cache\n");
        printf("saisir la methode de paiement\n");
    scanf("%d",&choix);
    printf("entrer le numero de votre carte\n");
    scanf("%s",paiement);
    printf("votre resrevation est confirmer\n");
    if(choix==3)
    printf("tu passer a voutre hotel pour payer en cache\n");
    }

void reserver_suite(){
    char type_suite[20];
    char date_arrivee[10];
    char date_depart[10];
    
    printf("sairir le type de suite que vous voulez reserver\n");
    scanf("%S",type_suite);
    if(strcmp(type_suite,"junior")==0){
    printf("vous aver reserver une suite junior\n");
     printf("le prix de suite junior est de 1700dh par nuit\n");
    }
    else if(strcmp(type_suite,"family")==0){
    printf("vous aver reserver une suite family\n");
 printf("le prix de suite family est de 2600dh par nuit\n");
}
    else if(strcmp(type_suite,"royal")==0){
    printf("vous avez reserver une suite royal\n");
 printf("le prix de suite royal est de 4500dh par nuit\n");
}
    else 
    printf("type de suite invalider\n");

      printf("la date de depart\n");
    scanf("%s",date_depart);
    printf("entrer la date d'arrivee\n");
    scanf("%s",date_arrivee);
    printf("vous avez reserver une suite du %s au %s\n",date_arrivee,date_depart);
}

void annuler_reservation(){
    char annuler ;
    char numero_reservation[20];
    printf("voulez vous annuler votre resrevation?(o/n)\n");
    scanf(" %c",&annuler);
    if(annuler=='o'){
        printf("entrez votre numero de reservation\n");
        scanf("%s",numero_reservation);
        printf("votre reservation est annuler\n");
    }
        else if(annuler=='n')
    printf("retour au menu principal\n"); 

}

void demander_facture(){
    char numero_reservation[20];
    float facture,nombre_nuit;
    char type_reservation[10];
    printf("entrer votre numero de reservation\n");
    scanf("%s",numero_reservation);
    printf("quel type de chambre ou la suite avez vous reserver\n");
    scanf("%s",&type_reservation);
    printf("combien de nuit avez vous reserver\n");
    scanf("%f",&nombre_nuit);
  
    if(strcmp(type_reservation,"simple")==0)
        facture=nombre_nuit*400;
     else if (strcmp(type_reservation,"double")==0)
     facture=nombre_nuit*700;
     else if(strcmp(type_reservation,"junior")==0)
     facture=nombre_nuit*1700;
     else if(strcmp(type_reservation,"family")==0)
     facture=nombre_nuit*2600;
     else if(strcmp(type_reservation,"royal")==0)
       facture=nombre_nuit*4500;
     else
     printf("reservation invalider\n");
     printf("le montant de votre facture est %.2f dh\n",facture);
}
 void demander_assistance(){
    char assistance[20];
    printf("quel type d'assistance voulez vous demander?\n");
    printf("1-assistance pour les bagages\n");
    printf("2-assistance pour les transports\n");
    printf("3-assistance de restaurant\n");
    printf("4-assistance pour les activies\n");
    printf("saisir l'assistance que vous voulez demander\n");
    scanf("%s",assistance);

 }
 void contacter_service_client(){
    int contact;
    printf("comment vouler vous contacter le service client?\n");
    printf("1-par telephone\n");
    printf("2-par email\n");
    printf("3-par chat en ligne\n");
    printf("saisir votre choix\n");
    scanf("%d",contact);
    switch(contact){
        case 1:
        printf("le numero de telephone du service client est 0713483276\n");
        break;
        case 2:
        printf("l'email du service client est: serviceclient@gamil.com\n");
        break;
        case 3:
        printf("cette option est en cours de developpement\n");
        break;
        default:
        printf("option invalide\n");
        break;
    }

 }
//  ||||||||||||||||||||||||||||||||||||\\menu d'admin//|||||||||||||||||||||||||||||||||||||||||
void ajouter_client(){
    char nom_prenom[30];
    char cin[10];
    long numero[20];
    char choix[20];
    printf("entrer le nom et prenom du client\n");
    scanf("%s",nom_prenom);
    printf("entrer le cin du client\n");
    scanf("%s",cin);
    printf("entrer le numero de telephone du client\n");
    scanf("%ld",numero);
   

}
void les_chambre_et_suites_disponible(){
    int nbr_chambre ;
    int nbr_suite;
    int reservation_chambre;
    int reservation_suite;
    int disponible1;
    int disponible2;
    printf("saisir le nombre de chambre ");
    scanf("%d",&nbr_chambre);
    printf("entrer le nombre des chambres reserver\n");
    scanf("%d",&reservation_chambre);
    disponible1=nbr_chambre-reservation_chambre;
    printf("les chambre  diponible reserver est %.2d\n",disponible1);
    printf("saisir le nombre de suite\n");
    scanf("%d",&nbr_suite);
    printf("entrer le nombre des suites reserver\n");
    scanf("%d",reservation_suite);
    disponible2=nbr_suite-reservation_suite;
    printf("les suites diponible reserver est %.2d\n",disponible2);

}
int main(){
    int choix;
    char identifier[10];
  
   printf("\t\t\tbienvenue dans notre service de gestion des hotels\n");
   printf("tu es un client ou un admin?\n");
   scanf("%s",identifier);
   if(strcmp(identifier,"client")==0){
    client_information();
    printf("\t\tbonjour cher client\n");
    gestion_client();
     printf("choisir une option:\n");
    scanf("%d",&choix);
    //    activer le menu de client

   switch (choix){
    case 1:
        reserver_chambre();
        methode_paiement();
       break;
    case 2:
        reserver_suite();
        methode_paiement();
       break;
    case 3:
    annuler_reservation();
    break;
    case 4:
    demander_facture();
    break;
    case 5:
    demander_assistance();
    break;
    case 6:
    contacter_service_client();
    break;
    case 7:
    printf("merci pour utiliser notre service");
    default:
    printf("option invalide\n");
    break;
   }
   }
   else if(strcmp(identifier,"admin")==0){
    printf("\t\tbonjour cher admin\n");
    gestion_admin();
        printf("choisir une option:\n");
        scanf("%d",&choix);
         
// activer le menu d'admin
   switch(choix){
    case 1:
    ajouter_client();
    reserver_chambre();
    methode_paiement();
    

    break;
    case 2:
    ajouter_client();
    reserver_suite();
    methode_paiement();
    break;
    case 3:
    demander_facture();
    break;
    case 4:
    les_chambre_et_suites_disponible();
    break;
    case 5:
    printf("merci pour utiliser notre service");
    default :
    printf("choix invalider");
   }
   }
   else
   printf("invalide identifier\n");
    return 0;
}