// |||||||||||Resoudre l'equation||||||||||
#include<stdio.h>
#include<math.h>
float a,b,c;
void saisir(){
    printf("donner la valeur de a:\n");
    scanf("%f",&a);
    printf("donner la valeur de b:\n");
    scanf("%f",&b);
    printf("donner la valeur de c:\n");
    scanf("%f",&c);

}
float delta(){
    float d;
    d=pow(b,2)-4*a*c;
    return d;

}
void solutions(float d)
{
    float x,x1,x2;
    if (d>0)
    {
       x1=(-b-sqrt(d))/2*a;
       x2=(-b+sqrt(d))/2*a;
       printf("x1=%.2f\n",x1);
       printf("x2=%.2f\n",x2);

    }
    else if(d==0)
   { 
    x=-b/2*a;
    printf("x1=%2.f\n",x);
   }
    else
    printf("pas solution\n");
    
}

int main(){
    float d;
    saisir();
    d=delta();
    solutions(d);


    return 0;
}