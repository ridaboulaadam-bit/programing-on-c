
// ex11
#include<stdio.h>
#include<math.h>
int main (){
    float a,b,i;
    int oper;
   
    do{
        printf("-------Menu-----");
        printf("1-addition\n");
        printf("2-difference\n");
        printf("3-multiplication\n");
        printf("4-divesion\n");
        
        
        printf("choisire une operation\n");
        scanf("%d",&oper);
        printf("donner 1 er terme:\n");
        scanf("%f",&a);
        printf("donner 2eme terme:\n");
        scanf("%f",&b);
        switch (oper)
        {
        case 1:printf("le resulta est:%.2f\n",a+b);

            break;
        case 2:printf("le resulta est:%.2f\n",a-b);
        break;
        case 3:printf("le resulta est:%.2f\n",a*b);
        break;
        case 4: if(b!=0){
        printf("le resulta est:%.2f\n",a/b);

        break;
        }
        else
        printf("div imposible\n");
        case 5:printf("le resulta est:%.2d\n",pow(a,b));
         break;
        default: printf("operration incorrect\n");
            break;
        }

        printf("veux tu faire un autre operation?(O/N)\n");
        scanf(" %c",&reponse);
    }while(reponse !='N');
    return 0;
}