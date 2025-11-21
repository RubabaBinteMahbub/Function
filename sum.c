#include<stdio.h>
void sum(int n){
int s=0;
for(int i=1;i<=n;i++){
s+=i;
}
printf("Sum = %d\n",s);
return;
}
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
sum(num);

return 0;
}
