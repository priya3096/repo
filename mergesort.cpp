#include<iostream>
using namespace std;
void mergearray(int arr[], int low, int mid, int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i]=arr[low+i];
    for(int j=0;j<n1;j++)
        R[j]=arr[j+mid+1];
    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
        while(i<n1)
        {
            arr[k]=L[i];
            i++;
            k++;
        }
         while(j<n2)
        {
            arr[k]=R[j];
            j++;
            k++;
        }

}
void mergesort(int arr[], int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        mergearray(arr, low, mid, high);
    }

}
int main()
{
    int arr[]={1,4,2,3,5,8,6,7};
    mergesort(arr, 0, 7);
    int k=0;
    while(k<8)
    {
        cout<<arr[k]<<endl;
        k++;
    }
    return 0;
}
