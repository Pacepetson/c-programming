#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("enter a number");
  scanf("%d%d%d",&num1,&num2,&num3);
  if (num1>num2){
      if(num1>num3){
        printf("%d is the largest number",num1);}
      else{
        printf("%d is the largest number",num3);}
  }
  else if (num2>num3){
    if (num2>num1){
      printf("%d is the largest number",num2);
  }
    else{
    printf("%d is the largest number",num1);}
  }
  else if(num3>num1){
    if(num3>num2){
      printf("%d is the largest",num3);
    }
    else{
      printf("%d is the largest",num2);}
  }
  else{ 
    printf("number are equal");
  }
  return 0;
  }



