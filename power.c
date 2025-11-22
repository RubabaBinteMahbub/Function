#include<stdio.h>
void power(int a,int b){
int pow=1;
for(int i=1;i<=b;i++){
pow*=a;
}
printf("Resul = %d\n",pow);
return;
}
int main() {
  int num,exp;
  printf("Enter the number  : ");
  scanf("%d",&num);
	printf("Enter the exponent  : ");
  scanf("%d",&exp);
  power(num,exp);

  return 0;
}
