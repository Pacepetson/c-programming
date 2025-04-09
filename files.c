#include<stdio.h>
int main(){
    FILE* fp;
    int worldcount=0;
    fp=fopen("sample.txt","r");
    char ch;
    while(fscanf(fp,"%c",&ch)==1){
        if(ch==' ' ||'.'){
          worldcount++;
        }
    }    
    printf("world count=%d",worldcount);
    fclose(fp);
    return 0;
}
  
  
  
  
