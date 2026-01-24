#include <stdio.h>
void swap_num(int x,int y); // Function declaration
int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    
    swap_num(num1,num2);
									// Don't put return type. 
    
    return 0;
}
void swap_num(int x,int y){ // Function definition
     printf("Before swapping,\n");
     printf("x=%d\n",x);
     printf("y=%d\n",y);
     
     printf("After swapping,\n");
     printf("x=%d\n",x+y-x);
     printf("y=%d\n",x+y-y);
}
