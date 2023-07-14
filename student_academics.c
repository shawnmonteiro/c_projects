#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

//void upper(char str[10]);
struct student
{
    char name[20],usn[10],rollno[3];
    int ia[5],as[5],q[5];
    float avgi,avga,avgq,total;
};

int main()
{
   struct student s[20];
   int n,ni,na,nq,m1,m2,m3,i,j,choice;
   printf("Enter the number of students:");
   scanf("%d",&n);
   printf("\nEnter the number of internal tests:");
   scanf("%d",&ni);
   printf("\nEnter the number of assignments:");
   scanf("%d",&na);
   printf("\nEnter the number of quizes:");
   scanf("%d",&nq);
   for(i=1;i<=n;i++)
   {
       printf("\nEnter the name of student %d:",i);
       scanf("%s",s[i].name);
       printf("\nEnter %s's roll number:",s[i].name);
       scanf("%s",s[i].rollno);
       printf("\nEnter %s's USN:",s[i].name);
       scanf("%s",s[i].usn);
       printf("\n");
       //internal test section
       
       m1=0;
       printf("Enter %s's marks in %d internals\n ",s[i].name,ni);
       for(j=1;j<=ni;j++)
       {
         printf("Marks in internal test %d: ",j);
         scanf("%d",&s[i].ia[j]);
         m1+=s[i].ia[j];
            
       }
       s[i].avgi=m1/ni;
       printf("\nInternal test average of %s: %f\n",s[i].name,s[i].avgi);
       
       //assignemt section
       
        m2=0;
       printf("\nEnter %s's marks in %d assignments\n ",s[i].name,na);
       for(j=1;j<=na;j++)
       {
           printf("Marks in assignment %d: ",j);
           scanf("%d",&s[i].as[j]);
           m2+=s[i].as[j];
       }
       s[i].avga=m2/na;
       printf("\nAssignemt average of %s: %f\n",s[i].name,s[i].avga);
       
       //quiz section
       
       m3=0;
       printf("\nEnter %s's marks in %d quizes\n",s[i].name,nq);
       for(j=1;j<=nq;j++)
       {
           printf("Marks in quiz %d: ",j);
           scanf("%d",&s[i].q[j]);
           m3+=s[i].q[j];
       }
       s[i].avgq=m3/nq;
       printf("\nQuiz average of %s: %f\n",s[i].name,s[i].avgq);
       
       //total section
       s[i].total=0;
       s[i].total=s[i].avgi+s[i].avga+s[i].avgq;
       printf("\nTotal of %s is : %f\n",s[i].name,s[i].total);
       
    }
    printf("Select the choice of format\n");
    printf("1.Student details(detailed)\n2.student details(only average)\n3.none\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        for(i=1;i<=n;i++)
        {
            printf("\nName of the student %d:%s",i,s[i].name);
            printf("\nRoll number:%s",s[i].rollno);
            printf("\nUSN:%s",s[i].usn);
            //for(j=1;j<=ni;i++)
            //{
            //    printf("\nInternal test %d:%d ",j,s[i].ia[j]);
            //}
            printf("\nAverage internal marks:%f",s[i].avgi);
            //for(j=1;i<=na;j++)
            //{
             //   printf("\nAssignment %d: %d ",j,s[i].as[j]);
            //}
            printf("\nAverage assignment marks:%f",s[i].avga);
            for(j=1;j<=nq;j++)
            {
               printf("\nQuiz %d: %d ",j,s[i].q[j]);
            }
            printf("\nAverage quiz marks:%f",s[i].avgq);
            printf("\nTotal average marks of %s is: %f ",s[i].name,s[i].total);
            
        }
        break;
        
        case 2:
        printf("AVERAGE MARKS\n");
        for(i=1;i<=n;i++)
        {
            printf("\nTotal average marks of Name: %s,Roll number %s, USN:%s : %f ",s[i].name,s[i].rollno,s[i].usn,s[i].total);
        }
        break;
        
        case 3:
        exit(0);
    }
    return 0;
}
