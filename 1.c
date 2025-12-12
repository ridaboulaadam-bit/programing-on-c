// #include <stdio.h>
// int main(){

//       int m,i; 
//      for (i=0;i<=12;i++){
//         m=i*7;
//         printf("7*%d=%d\n",i,m);
//      }
        
//    return 0;  
// }


//   #include<stdio.h>
// int main(){
//    int n,i,j,mu;
//   printf("x*y |");
//    for ( i = 1; i <=10; i++)
// {
//    printf("%d",i);
//    printf("/n");
//    for ( i = 1; i <=9; i++)
//    {
//       printf("--");
//       printf("/n");
//       for (i =1; i <=10; i++)
//       {

//          printf("%d   |",i);
//          for (j = 0; i <= 10; j++)

//          {
//             printf("%d",i*j);
           
//          }
//          printf("/n");
         
//       }
      
//    }
      
//    }
   
//    return 0;
// } 
// sommme pas a pas
// #include<stdio.h>
// int main(){
//     int i,s;
//     s=0;
//     for(i=1;i<=20;i++){
//         s=s+i;
//         printf("la somme de %d est:%d \n",i,s);
//     }

//     return 0;
// }
// la somme direct
//  #include<stdio.h>
// int main(){
//     int i,s;
//     s=0;
//     for(i=1;i<=20;i++){
//         s=s+i;
//         }
//         printf("la somme de 20 premier est:%d \n",s);
    
//     return 0;
//     }

// #include<stdio.h>
// int main(){

//     int n,i;
//     printf("donner le nombre n:");
//     scanf("%d",&n);
//     while (n<0 ||n>10)
//     {
//       printf("donner le nombre n:");
//     scanf("%d",&n);
//     }
//     i=0;
//     while (i<=10)
//     {
//         printf("%d * %d=%d",n,i,n*i);
//         i++;
//     }
    
    

//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a;
//     printf("donner un nombre:");
//     scanf("%d",&a);
//     while (a<10 || a>20)

//     {
//         if (a<10)
//         {
//            printf("plus petite \n");
//         }
//     else
//       printf("plus grand \n");
//        printf("donner un nombre:");
//     scanf("%d",&a); 
//     }
//     printf("bravo");
// }

#include<stdio.h>
int main(){

int n,i,s;
do
{
   printf("donner n:");
   scanf("%d",&n);

} while (n<1);
s=0;
for(i=1;i<=5;i++){
    s=s+i;
}
printf("la somme %d",s);


    return 0;
}