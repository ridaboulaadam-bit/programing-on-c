#include<stdio.h>
float diametre( float L){
    float d;
    d=L*2;
    return d;

}

float surface(float r){

    return r*r*3.14;
}
float perimetre(float r){
    return r*2*3.14;
}
int main(){
    float R;
    printf("donner le rayon R:");
    scanf("%f",&R);
    printf("le diamitre est:%.2f\n",diametre(R));
    printf("la surface est :%.2f\n",surface(R));
    printf("le perimertre est:%.2f\n",perimetre(R));

    return 0;

}