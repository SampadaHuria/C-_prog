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

    int low=0;
    int high=n-1;
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
        cout<<"Element found at index "<< mid;
        return 0;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    } 
    cout<<"Element not found";
    return -1;
}