#include<iostream>
using namespace std;

int main ()
{
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  int ans=0;
  for(int i=0;i<n;i++)
  {
    ans = ans^arr[i];
  }
  cout << "The only once occurrence element is :" << ans << " \n"; 
return 0;
}