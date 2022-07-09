#include<iostream>
using namespace std;
void rotate(int arr[],int n,int d)
{
    int l[n];
    int k=0;
    for(int i=d;i<n;i++)
    {
        l[k++] = arr[i];
    }
    for(int i=0;i<d;i++)
    {
        l[k++] = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = l[i];
    }
}
int main ()
{
 int n;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 int d;
 cin >> d;
 rotate(arr,n,d);
 cout << "Rotate Array :" << "\n";
 for(int i=0;i<n;i++)
 {
    cout<< arr[i] << " ";
 }
 cout << "\n";
return 0;
}