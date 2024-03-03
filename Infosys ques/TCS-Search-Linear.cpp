#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in array";
    cin>>n;
    int arr[n];
    int key;
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to find in array";
    cin>>key; 
    
 for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element is present at the index "<< i ;
            return 0; 
        }
    }

    cout << "Element not found in the array";
    return -1; 
}