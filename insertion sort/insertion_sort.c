#include<stdio.h>
#define SWAP(x,y,t)(t=x,x=y,y=t)


void insertion_sort(int a[10],int n)
{  
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i;
        while(j>0)
        {   
            if(temp<a[--j])
              {
                  a[j+1]=a[j];
                  a[j]=temp;
              }
        }
    }
}
void main()
{
    int a[10],n,i,ch;
    printf("Enter the no. of Elements:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);

    insertion_sort(a,n);
     
     printf("Sorted Array:");
     for(i=0;i<n;i++)
      printf("%d ",a[i]);
    
}