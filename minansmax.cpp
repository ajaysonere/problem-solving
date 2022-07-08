#include<iostream>
#include<bits/stdc++.h>
using namespace std;
pair<long long ,long long > getmin_max(long long  arr[],int n)
{
    long long mine = INT_MAX;
    long long maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mine)
        {
            mine = arr[i];
        }
    }

    pair<long long ,long long> ans ;
    ans.first = mine;
    ans.second = maxi;
    return ans;
}
int main ()
{
 int n;
 cin >> n;
 long long arr[n];
 for(int i=0;i<n;i++)
 {
    cin >>arr[i];
 }
 pair<long long ,long long > ans = getmin_max(arr,n);
 cout << ans.first << " " << ans.second << "\n";
return 0;
}