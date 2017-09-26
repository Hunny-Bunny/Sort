#include<stdio.h>
#define for(i,a,b) for(i=a;i<b;i++)

void partition(int a[],int low,int high);
void merge_sort(int a[],int low,int mid,int high);

int main()
{
    int i,n;
    scanf("%d",&n);
   int a[n];
   for(i,0,n)scanf("%d",&a[i]);
    partition(a,0,n);
    printf("Sorted array:\n");
    for(i,0,n)printf("%d ",a[i]);



    return 0;
}
void partition(int a[],int low,int high)
{
    int mid,i;
    mid=(low+high)/2;
    if(low<high)
    {
        partition(a,low,mid);
        partition(a,mid+1,high);
        merge_sort(a,low,mid,high);
    }
    //for(i,0,6)printf("%d ",a[i]);

}
void merge_sort(int a[],int low,int mid,int high)
{
    int i,l,h,m,c=low;
    l=low;
    m=mid+1;
    h=high;

    int temp[30];
    while((l<=mid) && (m<=high))
    {
        if(a[l]<=a[m])
        {
            temp[c]=a[l];
            l++;

        }
        else
        {
            temp[c]=a[m];
            m++;

        }
        c++;
    }
    if(l>mid)
    {
        for(i,m,high+1)
        {
            temp[c]=a[i];
            c++;
        }

    }
    else
    {
        for(i,l,mid+1)
        {
            temp[c++]=a[i];

        }

    }
    for(i,low,high+1){
            a[i]=temp[i];
            }

}
