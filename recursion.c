#include<stdio.h>
int power(int num,int exp){
  if (exp==0){
    return 1;
    }
  else if(exp==1){
    return num;
    }
  else{
    return num*power(num,exp-1);
    }
}
int main(){
  int num,exp;
  printf("enter the number");
  scanf("%d",&num);
  printf("enter the exponent");
  scanf("%d",&exp);
  printf("%d",power(num,exp));
  return 0;
  }
