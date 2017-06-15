#include<iostream>
using namespace std;
void sortarray(int a[], int n)
{
    for(int k=0; k<n-1;k++){
        int value= a[k];
        int pos=k;
        while(pos>0 && a[pos-1]>value){
            a[pos]=a[pos-1];
            pos=pos-1;
        }
        a[pos]=value;
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
