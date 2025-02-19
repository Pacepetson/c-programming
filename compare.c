#include<stdio.h>
#include<string.h>
int main(){
  char str1[20];
  printf("enter the character 1:");
  scanf("%s",str1);
  char str2[20];
  printf("enter the character 2:");
  scanf("%s",str2);
  int compare=strcmp(str1,str2);
  if(compare==0){
    printf("strings are equal");
  }
  else if(compare>0){
    printf("string 1 is greater");
    }
  else{
    printf("string 2 are greater");
    return 0;
  }
}  



