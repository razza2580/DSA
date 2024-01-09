#include<stdio.h>
int fact(int n){
if(n==1 || n==0 ){
    return 1;
}
else{
       return n*fact(n-1);
}
}
int main(){
int n;
int sum =0;
printf("enter number ");
scanf("%d",&n);
sum=fact(n);
printf("%d",sum);
return 0;
}

