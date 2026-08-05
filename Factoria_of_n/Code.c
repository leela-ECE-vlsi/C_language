#include<stdio.h>
int fact(int n);
int main(){
printf("factorial is :%d",fact(5));
return 0;
}
int fact(int n){
if (n==1){
return 1;
}
int fact Nm1=fact(n-1);
int fact N=fact Nm1*n;
}
