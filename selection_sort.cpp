#include<iostream>
using namespace std;
void sortarray(int a[], int n)
{
    for(int k=0; k<n-1;k++){
        int pos=k;
        for(int j=k+1;j<n;j++)
        {
            if(a[j]<a[k])
                pos=j;
        }
        int temp=a[k];
        a[k]=a[pos];
        a[pos]=temp;
    }
}
int main()
{
    int arr[]={2,6,5,3,4,1,7};
    sortarray(arr, 7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<endl;
    }
}
