#include<stdio.h>
struct student {
          char name[20];
          int roll;
          float tmarks;
};
int main ( ) {
     struct student s1,s2;
     scanf("%s", s1.name);
     scanf("%d", &s1.roll);
     scanf("%f",&s1.tmarks);
     scanf("%s", s2.name);
     scanf("%d", &s2.roll);
     scanf("%f",&s2.tmarks);
     printf("Name: %s\nRoll: %d\nTotal Marks: %f\n",s1.name,s1.roll,s1.tmarks);
     printf("Name: %s\nRoll: %d\nTotal Marks: %f\n\n",s2.name,s2.roll,s2.tmarks);
     float avg = (s1.tmarks+s2.tmarks)/2;
     printf("Average: %f\n",avg);
     return 0;
}
