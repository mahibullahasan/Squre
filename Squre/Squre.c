#include<stdio.h>
int main(){
int a,i,j,mul=0,result=0;
scanf("%d",&a);
for(i=0;i<=a;i++){
    for(j=1;j<=i;j++){
        mul=mul*i;
    }
    result=result+mul;
    mul=1;

}
printf("%d",result);





}
