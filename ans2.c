// Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n;
    int sum=0;
    float avg;
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
    avg=(sum)/n;
    printf("average of data is:%.2f",avg);
    free(ptr);
    return 0;
}