#include<iostream>
using namespace std;
// The problem is - Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
void sortarray(int a[],int n)
{
     int low =0;
     int mid =0;
     int high = n-1;
     while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[mid],a[low]);
                mid++;
                low++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            }
        }
}
int main ()
{
 int n;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin >>arr[i];
 }
 sortarray(arr,n);
 for(int i=0;i<n;i++)
 {
    cout<<arr[i] << " ";
 }
 cout<<"\n";
return 0;
}