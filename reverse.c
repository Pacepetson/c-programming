#include<stdio.h>
int main(){
    char str1[20];
    printf("enter the character");
    scanf("%s",str1);
    int length;
    for(length=0;str1[length]!='\0';length++);
    int i=length-1;
    for(int j=0;j<length/2;j++){
      char temp=str1[i];
      str1[i]=str1[j];
      str1[j]=temp;
      i--;
      }
printf("\n the reverse of the string:");
puts(str1);
return 0;
}
