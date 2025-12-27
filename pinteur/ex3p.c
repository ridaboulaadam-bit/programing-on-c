 #include<stdio.h>
 int main (){
int n,*p,i;
p=&n;
do{
    printf("donner n:");
    scanf("%d",p);

}while(*p<=0);
printf("les diviseur de %d est\n",*p);
for(i=1;i<=*p;i++){
    if(*p % i==0)
    printf("%d\n",i);
}
    return 0;
 }