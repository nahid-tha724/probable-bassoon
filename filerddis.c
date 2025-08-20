#include<stdio.h>
int main ( ) {
     FILE *file;
     char data[100];
     file = fopen("INPUT", "w");
     if(file==NULL) {
        printf("Error opening file for writing!\n");
        return 1;
     }
     printf("Enter some text: ");
     fgets(data, sizeof(data), stdin);
     fputs(data, file);
     fclose(file);
     printf("Data written to file 'INPUT' successfully.\n");
     file = fopen("INPUT", "r");
     if(file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
     }
     for(int i=0; i<sizeof(data); i++) {
        data[i]= '\0';
     }
     fgets(data, sizeof(data), file);
     printf("%s", data);
     fclose(file);
     return 0;
}
