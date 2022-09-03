// Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>
int memory();
int main(){
    int n;
    int *ptr;
    ptr=(int *)malloc(1*sizeof(int));
    printf("\nEnter the numbers:");
    scanf("%d",ptr);
    printf("%d\n",*ptr);
    free(ptr);
    //nothing is pointed by pointer because we free the dma
    printf("%d",*ptr);
    return 0;
}