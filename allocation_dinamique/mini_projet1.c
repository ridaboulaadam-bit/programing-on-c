//gestion des notes
#include<stdio.h>
void saisire_note(float n[10]){
    printf("saisir note entre 0et20:");
    scanf("%f",&n[10]);

}
int main(){
    float n[20];
    int i;
    for(i=0;i<=10;i++){
        printf("n%d=",i);
        scanf("%f",&n[i]);
    }
    do
    {
        printf("la note saisire est:");
        scanf("%f",n[i]);
    } while (n[i]>0 && n[i]<=20);

    

    return 0;
}