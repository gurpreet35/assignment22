// Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
int memory();
int main(){
    int *qtr;
    qtr=memory();
    printf("%x",qtr);
    //here we can't use the same memory! So,memory is leaked
    qtr=memory();
    printf("%x",qtr);
    return 0;
}
int memory(){
    int n;
    int *ptr;
    ptr=(int *)malloc(1*sizeof(int));
    printf("\nEnter the numbers:");
    scanf("%d",ptr);
    return ptr;
}