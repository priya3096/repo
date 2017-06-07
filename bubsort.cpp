#include<iostream>
using namespace std;
void sortarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
}
int main()
{
    int arr[]={1,4,2,3,5,8,6,7};
    sortarray(arr, 8);
    int k=0;
    while(k<8)
    {
        cout<<arr[k]<<endl;
        k++;
    }
    return 0;
}
