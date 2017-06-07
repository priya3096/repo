#include<iostream>
using namespace std;
int parting(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    i++;
    arr[high]=arr[i];
    arr[i]=pivot;
    return i;
}
void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi=parting(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }

}
int main()
{
    int arr[]={1,4,2,3,5};
    quicksort(arr, 0, 4);
    int k=0;
    while(k<5)
    {
        cout<<arr[k]<<endl;
        k++;
    }
    return 0;
}
