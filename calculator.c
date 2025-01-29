#include<stdio.h>
int main(){
  int num1,num2,operations;
  char operation;
  printf("enter two numbers");
  scanf("%d%d",&num1,&num2);
  printf("\nchoose an operation:+, -, *, /,%%");
  scanf(" %c",&operation);
  switch(operation){
    case'+':
    printf("sum=%d",num1 +num2);
    break;
    case'-':
    printf("differences=%d",num1-num2);
    break;
    case'*':
    printf("product=%d",num1*num2);
    break;
    case'/':
    printf("quotient=%d",num1/num2);
    break;
    case'%':
    printf("remainder=%d",num1%num2);
    break;
    default:printf("invalid choices");
    break;
    }
    
  return 0;
    
  }
  
