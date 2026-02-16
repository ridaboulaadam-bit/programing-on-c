// // // //  boucles
// //  ex1
// #include <stdio.h>
// int main(){

//   int a,i,n;
//   printf ("donner la valeur de nombre:");
//   scanf("%d",&a);
//   for (i=1;i<=10;i++){
//     n=a+i;
    
// printf("%d\n",n);

//   }


//     return 0;
// }
// // // 2 eme methode
// // #include <stdio.h>
// // int main(){

// //   int a,i,;
// //   printf ("donner la valeur de nombre:");
// //   scanf("%d",&a);
// //   for (i=a+1;i<=a+10;i++){
    
    
// // printf("%d\n",i);

// //   }


// //     return 0;
// // }
// // en utulise while
// // #include <stdio.h>
// int main(){

//   int a,i;
//   printf ("donner la valeur de nombre:");
//   scanf("%d",&a);
//   i=a+1;
//     while (i<=a+10)
//     {
//         printf("%d\n",i);
//         i++;

//     }
//     return 0;
// }
// do while 
// #include <stdio.h>
// int main(){

//   int a,i;
//   printf ("donner la valeur de nombre:");
//   scanf("%d",&a);
//   i=a+1;
//    do
//    {
//   printf("%d\n",i);
//   i++;
//    } while (i<=a+10);
//    return 0;
// }
// ex3
// #include <stdio.h>
// int main(){

//   int n,i,s;
//   printf ("donner la valeur de nombre:");
//   scanf("%d",&n);
//   s=0;
//   for(i=1;i<=n;i++){
//    s=s+1/(1+i);
   
//   }
//   printf("s=%.2f\n",s);
//    return 0; 
// }  

// ex4

// ex5
// #include <stdio.h>
// int main(){
//     int a;
//     float f,i;
//     printf("donner la valeur de a: ");
//     scanf("%d",&a);
//     f=1;
//     if (a>0)
//     {
//         for(i=2;i<=a;i++){
//             f=f*i;

//         }
//         printf("f=%.2f",f);
//     }
//     else  if (a==0)
//     printf("f=1");
//     else
//     printf("veuiller  saisir un nombre positif");
    
    

//     return 0;
// }
// ex6

// #include <stdio.h>
// #include<math.h>

// int main(){
//     int a;
//     float s,i,p;
//     printf("donner la valeur de a: ");
//     scanf("%d",&a);
//     s=0;
//     p=1;
//     for(i=1;i<=a;i++){
//         s=s+pow(p,2);
//         p=p+2;
//     }
//     printf("s=%2.f",s);
//     return 0;
// }
// // ex7 divesion
// #include<stdio.h>
// int main(){
//     int n,i;
//     do
//     { 
//          printf("donner la valeur de a: ");
//     scanf("%d",&n);
//     } while (n<=0);
//     for(i=1;i<=n;i++){
//         if(n%i==0){
//             printf("div de %d est :%d",n,i);
//         }
//     }
    

//     return 0;

// }
//  ex8
// #include<stdio.h>
// int main(){
//     int s ,age,i;
//     printf("donner l'age:");
//     scanf("%d",&age);
//     s=0;
//     i=1;
//     while(i<=age){
//         s=s+(500+i*3);
//         i++;

//     }
//     printf("s=%.2d",s);

//     return 0;
// }


// ex8 les annee pour le nombre de agadir > marakech
// #include<stdio.h>
// int main(){
//     int nbran;
//     float i, pa,pm;
//     pa=500000;
//     pm=1000000;
//     nbran=0;
//     while(pa<pm){
//         pm +=50000;
//         pa +=pa*0.08;
//         nbran++;

//     }
// printf("nombre des annee est:%d",nbran);

//     return 0;
// }


// // ex9
// #include<stdio.h>

// int main(){
//     int n,U,Ui,i;
    
//        printf("donner la valeur de n: ");
//     scanf("%d",&n);
//     Ui=6;
//     for ( i = 1; i <= n; i++)
//     {

//       U=4*Ui+10;
//       Ui=U;

//     }
//     printf ("U%d=%d",n,U);


    

//     return 0;
// }
// // ex12
// #include<stdio.h>
// int main(){
//     long N;
//     int nbr;
//     printf("donner un nombre:");
//     scanf("%ld",&N);
//     nbr=0;
//     do{
//       N=N/10;
//       nbr++;
//     }while(N!=0);
//     printf("nonbre total de chiffre est:%d",nbr);

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int N;
//     int inverse=0;
//     printf("saisir un nombre:");
//     scanf("%d",&N);
//     inverse= inverse*10+(N%10);
//     N=N/10;
//     while(N!=0){
//         printf("l'inverce de N est",inverse);

//     }
     

// }
// les boucle
//  ex1
// #include<stdio.h>
// int main(){
//     int T[10];
//     int i;
//     for ( i = 0; i <10; i++)
//     {
//        T[i]=0;
//     }
//     for(i=0;i<10;i++)
//     printf("T[%d]=%d\n",i,T[i]);
    

//     return 0;
// }
// ex2
// #include<stdio.h>
// int main(){
//     char t[6];
//     int i;
//     t[0]='A';
//     t[1]='K';
//     t[2]='D';
//     t[3]='E';
//     t[4]='Y';
//     t[5]='S';
//     for(i=0;i<6;i++)
//     printf("%c\n",t[i]);
//     return 0;
// }



// ex7 

// #include<stdio.h>
// int main(){
//     int T[10],i,n,x;
//     for(i=0;i<10;i++){
//         printf("T[%d]=",i);
//         scanf("%d",&T[i]);
        
//     }
//     printf("saisir un entier:");
//     scanf("%d",&n);
//     x=0;
    
//     for(i=0;i<10;i++){
//         if(n==T[i])
//         x++;
        
//     }
  
//    printf("x=%d",x);


//     // return 0;
// }
