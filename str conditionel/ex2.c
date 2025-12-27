# include<stdio.h>
int main(){
    int N;
    float F;
    pintf("donner nonbre de copier:");
    scanf("%d",&N);
    if(N<10){
    F=N*0.30;
    }
   else if(N<=30)
      F=10*0.30+(N-10)*0.25;
      else{
         F=10*0.30+20*0.25+(N-30);
      }
      pintf("la facture de client est:%2f dh",F);

   return 0;
}