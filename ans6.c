// . Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n;
    int sum=0;
    printf("Enter the total number of data:");
    scanf("%d",&n);
    
    ptr=(int *)malloc(n*sizeof(int));
    fflush(stdin);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if(*(ptr+i)>*(ptr+j)){
                int temp;
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
        
    }

        printf("Largest number in array is :%d ",*(ptr+n-1));
    
    free(ptr);
    return 0;
}