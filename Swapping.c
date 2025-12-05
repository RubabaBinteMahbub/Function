#include<stdio.h>
void swap(int x,int y){
   int temp=x;
   x=y;
   y=temp;
   printf("After swapping, x = %d and y = %d.",x,y);
}
int main(){
    int num1,num2;
    printf("Enter the numbers : ");
    scanf("%d%d",&num1,&num2);
    swap(num1,num2);
    
    return 0;
}
