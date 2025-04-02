#include<stdio.h>
struct employee{
      int id;
      char name[20];
      float salary;
};
int main(){
int limit;
printf("enter the limit");
scanf("%d",&limit);

    struct employee s[limit];
    for(int i=0;i<limit;i++){
    printf("\n enter the id");
    scanf("%d",&s[i].id);
    printf("\n enter the name");
    scanf("%s",s[i].name);
    printf("\n enter the salary");
    scanf("%f",&s[i].salary);
    }
    for(int i=0;i<limit;i++){
    printf("\n employee details:\n");
    printf("id:%d\n",s[i].id);
    printf("name:%s\n",s[i].name);
    printf("salary:%f\n",s[i].salary);
    }
    return 0;
}
