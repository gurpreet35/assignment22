// Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the length of string:");
    scanf("%d",&n);
    char *p;
    p=(char*)malloc(n*sizeof(char));
    fflush(stdin);
    gets(p);
    puts(p);
    free(p);
    return 0;
}