/*
EXP NO : 9
TITLE :WAP to print data of student
NAME : SIDDIQUI OBAIDULLAH ABDUL QAYYUM 
UIN : 241P025
DIV : C
*/
#include<stdio.h>
struct Details
char name[50];
int Rollno;
int TMarks;
};
int main() {
}
int HM, TP;
struct Details stu[5];
for (int i=0; i&lt;5; i++);
printf("Enter data of student No. %d\n",i+1);
printf("Name: ");
gets(stu[i].name);
printf("Roll No.: ");
scanf("%d", &amp;stu[i].Rollno);
printf("Total Marks: ");
scanf("%d", &amp;stu[i]. TMarks); 
getchar();
if(stu[i].TMarks&gt;HM) 
HM-stu[i].TMarks;
}:
TP=i;
}
}
printf("Topper Details\n");
printf("Name: %s\n", stu[TP].name);
 printf("Roll No.: %d\n", stu[TP]. Rollno);
  printf("Marks: %d\n", stu[TP]. TMarks);
 return 0;
}