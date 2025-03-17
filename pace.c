#include<stdio.h>
void multnum(int,int);
int main(){
  int num1,num2;
  printf("enter the first element");
  scanf("%d",&num1);
  printf("enter the second element");
  scanf("%d",&num2);
  multnum(num1,num2);
  return 0;
}
void multnum(int num1,int num2){
int product = num1*num2;
printf("%dx%d=%d",num1,num2,product);
}


