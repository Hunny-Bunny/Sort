#include<stdio.h>
void bubble_sort(int a[],int low,int n)
{
    int i,j;
    for(i=low;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])swap(&a[j],&a[j+1]);

        }

    }

}
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    bubble_sort(a,0,n);
    for(i=0;i<n;i++)printf("%d ",a[i]);

    return 0;
}

