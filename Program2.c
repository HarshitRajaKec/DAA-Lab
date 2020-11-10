//Harshit Raja
//Roll No. - 18161110082
//Program - Binary search 

#include<stdio.h>
void main()
{
    int a[10],n,i,j,key,first,last,mid,flag=0;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter elements to search: ");
    scanf("%d",&key);
    first=0;
    last=n-1;
    while(first<=last)
        {
            mid=( first+last)/2;
            if(a[mid]>key)
            last=mid-1;
            else if(a[mid]==key)
                {
                    flag=1;
                    break;
                }
            else
            first=mid+1;
        
        }
if(flag==1)
    printf("element found");
}