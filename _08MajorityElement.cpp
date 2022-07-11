/* Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array. */
#include<iostream>
using namespace std;
int majorityElement(int arr[],int size)
{
    int element =0;
    int count =0;
    for(int i=0;i<size;i++)
    {
        if(count==0){
            element = arr[i];
        }
        if(element==arr[i]){
            count++;
        }
        else{
            count--;
        }

    }
   count =0;
    for(int i=0;i<size;i++){
      if(element==arr[i]){
        count++;
      }
    }
    if(count>(size/2)){
        return element;
    }
    else{
        return -1;
    }
}
int main ()
{
 cout << "Enter the size of the array :" << "\n";
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++)
 {
    cin >>arr[i];
 }
 cout << "The majority element is " << majorityElement(arr,size) << "\n";
return 0;
}