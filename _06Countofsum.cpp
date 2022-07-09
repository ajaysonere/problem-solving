#include<iostream>
using namespace std;
 
 // for Sorted array 

int Countsubset(int arr[],int n,int key)
{
    int i=0;
    int j=n-1;
    int ans =0;
    for(int k=0;k<=(n/2);k++)
    {
        if(i==j)
        {
          return ans;
        }
        if(arr[i]+arr[j]==key)
        {
            ans++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
 
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
 int key ;
 cin >> key;
 cout << "Count of the subset is :"<< Countsubset(arr,n,key) << "\n";

return 0;
}