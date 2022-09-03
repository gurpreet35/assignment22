// Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int memory();
int main(){
    int n;
    int *ptr;
    printf("Enter the number of bytes");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf(" Memory allocation is failed");
    }
    else{
    printf("\nEnter the numbers:");
    for (int i = 0; i < n; i++)
    {
    scanf("%d",(ptr+i));
    }
    printf("Your data is:");
    for (int i = 0; i < n; i++)
    {
    printf("%d\n",*(ptr+i));
    }
    }
    return 0;
}