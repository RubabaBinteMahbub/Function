#include<stdio.h>
void factorial(int n){
int fact=1;
for(int i=2;i<=n;i++){
fact*=i;
}
printf("Factorial = %d\n",fact);
return;
}
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
factorial(num);
return 0;
}
