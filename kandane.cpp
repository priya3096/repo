#include <iostream>
using namespace std;

int max(int a, int b)
{
    if(a>b)
        return a;
    else if(a<b)
        return b;
    else
        return a;
}
int main() {
	int T;
	cin>>T;
    for(int k=0;k<T;k++)
    {
        int n;
        int arr[n];
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int max_so_far=arr[0];
        int max_ending_here=arr[0];
        for(int i=1;i<n;i++)
        {
            max_ending_here=max(arr[i], max_ending_here+arr[i]);
            max_so_far=max(max_ending_here,max_so_far);

        }
        cout<<max_so_far<<endl;

    }
	return 0;
}
