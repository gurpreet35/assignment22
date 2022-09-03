// Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
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