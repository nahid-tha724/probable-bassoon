#include<stdio.h>
int main ( ) {
     FILE *src, *dest;
     char src_name[100], dest_name[100];
     char ch;
     int choice;
     printf("1. Copy\n2. Append\nChoose one: \n");
     scanf("%d", &choice);
     printf("Enter source file name: ");
     scanf("%s", src_name);
     printf("Enter destination file name: ");
     scanf("%s", dest_name);
     src = fopen(src_name, "r");
     if(src==NULL) {
        printf("Cannot open source file!\n");
        return 1;
     }
     if(choice==1) {
        dest = fopen(dest_name, "w");
     }
     else {
        dest = fopen(dest_name, "a");
     }
     if(dest==NULL) {
        printf("Cannot open destination file!\n");
        fclose(src);
        return 1;
     }
     while((ch==fgetc(src))!= EOF) {
        fputc(ch,dest);
     }
     printf("Operation successful!\n");
     fclose(src);
     fclose(dest);
     return 0;
}
