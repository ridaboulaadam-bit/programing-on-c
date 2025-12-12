// // //  ex1 age par date naissence
// //  #include<stdio.h>

// //  int main()
 
// //  {
// //     int n,ag;
// //     printf("donner l annee de naissance");
// //     scanf("%d",&n);
// //     ag=2025-n;
// //      printf("l'age est%d",ag),
      
    
// //      return 0;
// //  }
// // //  ex2  calcule surface et perimetre
// // #include<stdio.h>
// // int main(){
// //     float L,l,s,d;
// //     printf("donner la largeur:");
// //     scanf("%f",&l);
// //     printf("donner la longueur:");
// //     scanf("%f",&L);
// //  s=l*L;
// //  printf("la surface est:%.2f \n",s);
// //  p=(l+L)*2;
// // //  %2f :عدد الارقام خلف الفاصلة
// //  printf("le perimetre est:%.2f\n",p);
 
// //    return 0;
// // }
// // // ex3  puissance
// // #include <stdio.h>
// //  #include <math.h> 
// // int main(){
    
// //    float x,y,pui
// //    printf("saisir la valeur de x:");
// //    scanf("%f",&x);
// //    prinf("saisir la valeur de y:");
// //    scanf("%f",&y);
// //    pui=pow(x,y);
// //    printf(" puissance est:%.2f\n",pui);

// //    return 0;
// // }

// // // ex4 calculatrice
// // #include<stdio.h>
// // int main(){
    
// //    float a,b,s,d,p,div;
// //    printf("donner la valeur de a ");
// //    scanf("%f",&a);
// //    printf("donner la valeur de b")
// //    scanf("%f",&b);
// //    s=a+b;
// //    d=a-b;
// //    p=a*b;
// //    div=a/b;
// //    prinf("resulta de cette operation est:%.2f\n",s,d,p,div); 

// //    return 0;
// // }

// // // ex 5 
// // #include<stdio.h>
// // int main(){

// //    float n1,n2,n3,n4,n5 ,s,m;
// //    printf("donner les notes:\n");
// //    scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5),
// //    s=n1+n2+n3+n4+n5;
// //    m=s/5;
// //    printf("la somme est:\n%.2f",s);
// //    printf("le moyenne est:%.2f\n",m);
// //    return 0;
// // }
// // // ex6
// // #include <stdio.h>
// // #include<math.h>
// // int main(){
// //    float r,v;
// //    const float pi=3.14;
// //    print("donner le rayon de sphere:");
// //    scanf("%f",&r);
// //    v=(4*pi*pow(r,3))/3;
// //   printf("le volume de sphere est:%.2f\n",v);

// //    return 0;
// // }
// // // ex7
// // #include<stdio.h>
// // int main(){

// //    int A,B,c; 
// //    printf("enter la valeur de A:");
// //    scanf("%d",&A);
// //    printf("enter la valeur de B:");
// //    scanf("%d",&B);
// //    C=A;
// //    A=B;
// //    B=c;
   
// //    printf("l'echange de A:%d\n",A);
// //    printf("l'echange de B:%d\n",B);
// //    return 0;
// // }
// // // sans utilise autre var
// // #include<stdio.h>
// // int main(){

// //    int A,B,c; 
// //    printf("enter la valeur de A:");
// //    scanf("%d",&A);
// //    printf("enter la valeur de B:");
// //    scanf("%d",&B);
// //    A=A+B;
// //    B=A-B;
// //    A=A-B;
   
// //    printf("l'echange de A:%d\n",A);
// //    printf("l'echange de B:%d\n",B);
// //    return 0;
// // }
// // // ex9
// // #include<stdio.h>
// // int main(){
// //    int T,se,min,h,R;
// //    printf("donner le temps en seconde:");
// //    scanf("%d",&T)
   
// //    h=T/3600;
// //    R=T %3600;
// //    min=R/60;
// //    se= R%60;
// //    printf("%d h %dmin %dse",h,min,se);
// //    return 0;
// // }
 
// // // ex10
// //    #include<stdio.h>

// // #include<math.h>

// // int main(){

// //    float Xa,Xb,Ya,Yb,AB; 
// //    printf("entrer le coordonnee de X de A ");
// //    scanf("%f",Xa);
// //    printf("entrer le coordonnee de X de A ");
// //    scanf("%f",Ya);
// //     printf("entrer le coordonnee de X de B ");
// //    scanf("%f",Xb);
// //     printf("entrer le coordonnee de Y de B ");
// //    scanf("%f",Yb);
// //    // sqrt دلة للجذر مربع
// //    AB=sqrt(pow(Xb-Xa,2)+pow(Yb-Ya,2));

// //    printf("la distance est:%2f\n",AB); 
// //    return 0;
// // }
// // // str cond
// // // ex1
// // #include <stdio.h>

// // int main(){
// //    intA,B;
// //    print("entrer valeur de A:");
// //    scanf("%d",&A);
// //    printf("entrer valeur de B:");
// //    scanf("%d",&B);
// // if(A*B>0){
// //    printf("A et B sont meme signe\n");
// // }
// // else
// // printf("A et B de different signe");


// //    return 0;

// // }
// // // ex2
// // #include <stdio.h>
// // int main(){
// //    int A,B,C,D;
// //    print("entrer valeur de A:");
// //    scanf("%d",&A);
// //    printf("entrer valeur de B:");
// //    scanf("%d",&B);
   
// //    if(A*B>0){
// //       C=A;
// //       A=B;
// //       B=C;
         

// //    }
// //    else
// //    {
// //     D=A*B;
// //     C=A+B;
// //     A=c;
// //     B=D; 
    
    
// //    }
// //    printf(" noveau valeur de A:%2d\n",A);
// //     printf("noveau valeur de B:%2d\n",B);
// //    return 0;

// // }
// // // ex3
// // # include<stdio.h>
// // int main(){
// //     int N;
// //     float F;
// //     pintf("donner nonbre de copier:")
// //     scanf("%d",&N);
// //     if(N<10){
// //     F=N*0.30;
// //     }
// //    else if(N<=30){
// //       F=10*0.30+(N-10)*0.25;
// //       else{
// //          F=10*0.30+20*0.25+(N-30);
// //       }
// //       pintf("la facture de client est:%2f dh",F);
// //    }
// //    return 0;
// // }
// // // ex4
// // #include<stdio.h>
// // int main(){
// //      int a;
// //      prinf("veulliez entrer l age denfant:");
// //      scanf("%d",&a);
// //      if(a=>6 && a<=7)
// //      pintf("poussin");
// //    else if(a=>8 && a<=9);
// //    prinf("pupille");
// //    else if(a>=10 && a<=11);
// //    prinf("Minime");
// //    else
// //    prinf("Cadet");

// //    return 0;
// // }
// // //  ex5 
// // #include<stdio.h>
// // int main(){
// //     float N1,N2,N3,M;


// //      prinf("entrer la note N1 :");
// //      scanf("%f",&N1);
// //      prinf("entrer la note N2 :");
// //      scanf("%f",&N2);
// //      prinf("entrer la note N3 :");
// //      scanf("%f",&N3);
// //      M=(N1+N2+N3)/3;
// //      prinf("la moyene est:%2.f",M);
// //      if(M<10)
// //      pintf("lnsuffisant");
// //    else if(M>=10 && M<12);
// //    prinf("passable");
// //    else if(M>=12 && M<14);
// //    prinf("asser bient");
// //    else if(M>=14 && M<16);
// //    prinf(" montion bien");

// //    else if(M>=16)
// //    prinf("montion tres bient");

// //    return 0;
// // }
// // // ex6 
// // #include<stdio.h>
// // #include<math.h>

// // int main(){
// //    float a,b,x,c,x1,x2,delta;
// //    prinf("donner a et b et c");
// //    scanf("%f %f %f",&a,&b,&c);
// //    delta=pow(-b,2)-4*a*c;
// //    if(delta==0){
// //    x=-b/2*a;
// // pintf("les solution est:%2f",x);
// // }
// // else if(delta>0){
// //    x1=(-b-sqrt(delta)/2*a);
// //    x2=(-b+sqrt(delta)/2*a);
// //    pintf("les solution est:%2f",x1,x2);

// // }
// //  else{
// //    printf("pas solution");}

// //    return 0;
// // }
// // //  ex7
// // #include<stdio.h>
// // int main(){
// //    int ag;
// //    char se;
// //    prinf("l'age est:");
// //    scanf("%d",&a);
// //    printf("le sexe de habitant est:");
// //    scanf("%c",&se);
// //    if(se=='h'&& ag>=20) || (se='f' && ag>=18 && ag <=35){
// //       prinf(" habitant est imposable");

// //    }
// //    else 
// //    prinf("habitant est:non imposable");

// //    return 0;
// // }
// // // ex8
// // # include<stdio.h>
// // int main(){
// //    char categorie;
// //    float pht,pttc;
// //    printf ("donner  categorie");
// //    scanf("%c";&categorie);
// //    printf("donner la pht:");
// //    scanf("%f",&pht);
// //      switch (categorie)
// //      {
// //      case 'A': pttc=pht+pht*0.07;
// //      printf("le prix est:%2f",pttc);
     
// //       break;
// //      case 'B':pttc=pht+pht*0.2;
// //      printf("le prix est:%2f",pttc);
// //      break;
// //      case 'C':pttc=pht+pht*0.25;
// //      printf("le prix est:%2f",pttc);
// //      break;
// //      default: printf("la categorie nest existe pas");
// //       break;
// //      }

// //    return 0;
// // }
// // //  ex9
// // # include<stdio.h>
// // int main(){

// //   float a,b;
// //   char operation;
// //    printf("donner la vsleur de a:");
// //    scanf("%d",&a);
// //    printf("donner la vsleur de b:");
// //    scanf("%d",&b);
// //    printf("choisir operation:");
// //    scanf("%c",&operation);
// //    switch (operation)
// //    {
// //    case '+':printf("a+b=%.2f",a+b);
// //    break;
// //    case '-': printf("a-b=%.2f",a-b);
// //       break;
// //    case '*':printf("a*b=%.2f",a*b);
// //    break;
// //    case '/': if (b!=0)
// //    {
// //     printf("a/b=%.2f",a/b);
// //    }
// //    else
// //    printf("impossible");
   
// //    default:printf("operation incorect");
// //       break;
// //    }

// //    return 0;
// // }
// // // ex10
// // #include<stdio.h>
// // int main(){
// //    float a;
// //    printf("saisir un nombre:");
// //    scanf("%f",&a);
// //    switch (a)

// //    {
// //    case '6':printf(" personage va a droite");
// //       break;
// //       case '4':printf("va a gauche");
// //       break;
// //       case '8':printf("va en haut");
// //       break;
// //       case '2':printf("va en bas");
   
// //    default: printf("ne bouge pas");
// //       break;
// //    }
// //    return 0;
// // }
// // //  boucles
// // // ex1
// //   #include <stdio.h>
// //   int main(){
// //    int n,i,pre;
// //    printf("donner la valeur de n:");
// //    scanf("%d",&n);
// //    pre=1;
// //    for ( i = 2; i <= n/2; i++)
// //    {
// //       if (n%i==0)
// //       {
// //          pre=0;
// //          break;
// //       }
      
// //    }
// //    if (pre==1)
// //    {
// //       printf("%d est premier",n);
// //    }
// //    else
// //    printf("%d est non premier",n);


// //    return 0;
// //   }
// //   ex2 كيفاش تبلوكي بيسي ههههههههههههههه
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
//       for (i = 1; i <=10; i++)
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
// // ex3
// // #include <stdio.h>
// // int main(){
        
// //    return  0;
// // }
