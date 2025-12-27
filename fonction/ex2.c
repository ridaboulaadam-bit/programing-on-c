
#include<stdio.h>
#include<math.h>
float puissance(float p){
    float c;
    c= pow(p,3);
    return c;


}
int main(){
float x,k;
printf("donner la valeur de x:");
scanf("%f",&x);
k=puissance(x);
printf("le cube de%.1f est:%1.f",x,k);

  return 0;

}