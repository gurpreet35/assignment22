// Define a function to input variable length string and store it in an array without
// memory wastage.
#include<stdio.h>
#include<stdlib.h>
void memory();
int main(){
    memory();
    return 0;
}
void memory(){
    int n;
    char *ptr;
    printf("Enter the length of string:");
    scanf("%d",&n);
    ptr=(char *)malloc(n*sizeof(char));
    fflush(stdin);
    gets(ptr);
    puts(ptr);
    free(ptr);
}