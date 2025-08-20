#include<stdio.h>
struct student {
          char name[30];
          float marks;
};
int main ( ) {
     int n,i,j;
     struct student temp;
     printf("Enter number of students: ");
     scanf("%d", &n);
     struct student students[n];
     for(i=0;i<n;i++) {
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
     }
     for(i=0 ; i<n-1 ; i++) {
        for(j=0 ; j<n-i-1 ; j++) {
            if(students[j].marks < students[j+1].marks) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
     }
     printf("\nMerit list:\n");
     for(i=0 ; i<n ; i++) {
        printf("%d.%s - %.2f\n",i+1, students[i].name, students[i].marks);
     }
     return 0;
}
