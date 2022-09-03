// Find out the maximum and minimum from an array using dynamic memory allocation
// in C
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
        printf("Smallest number in array is:%d\n",*(ptr));
        printf("Largest number in array is :%d ",*(ptr+n-1));
    
    free(ptr);
    return 0;
}