//Implementing Linear Search in C
//06/08/2020
//Harshit Raja
//Roll No. - 1816110082
#include<stdio.h>
  
int main()
{
    int arr[20],i,key,size;
    printf("Enter no of elements in array:");
    scanf("%d",&size);
     
    printf("Enter array elements:");
    for(i=0;i<size;++i)
        scanf("%d",&arr[i]);
     
    printf("Enter element to search:");
    scanf("%d",&key);
     
    for(i=0;i<size;++i)
        if(arr[i]==key)
            break;
     
    if(i<size)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
}