// Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n;
    int sum=0;
    printf("Enter the total number of data:");
    scanf("%d",&n);
    
    ptr=(int *)malloc(n*sizeof(int));
    fflush(stdin);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",(ptr+i));
    }
    for (int i = 1; i <=n; i++)
    {
        sum+=*(ptr+i);
    }
    
    printf("Sum of data is:%.2d",sum);
    free(ptr);
    return 0;
}