#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
    float marks2;
}s[10];
int main()
{
   // struct student s;
    int i,j,k;
    int sum=0,avg;
 while(i!=10)
   {
    printf("Enter The Information of Students :\n\n");
    
    printf("Enter Name : ");
    scanf("%s",s[i].name);
    
    printf("Enter Roll No. : ");
    scanf("%d",&s[i].roll);
      while(j!=6)
      {   
         printf("Enter marks of 6 subjects : ");
         scanf("%f",&s[i].marks);
      }
      while(k!=4)
      {   
         printf("Enter marks of 4 highest scoring subjects : ");
         scanf("%f",&s[i].marks2);
         sum=sum+s[i].marks2;
      }     
    avg=sum/400;
    if(avg>=95)
    printf("eligibile");
    else
    printf("not eligibile");
    printf("\n");
   }
     printf("\nDisplaying Information\n");

 while(i!=10)
 {   
    printf("Name: %s\n",s[i].name);
    printf("Roll: %d\n",s[i].roll);
    printf("Marks: %.2f\n",s[i].marks);
 }   
    return 0;
}