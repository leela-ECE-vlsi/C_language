#include<stdio.h>
int main(){
  int n;
do{
printf("enter a number ");
scanf("%d", &n);
if(n%7==0){
break;
}
}while(1);
printf("it is a maultiple of 7");
return 0;
}
