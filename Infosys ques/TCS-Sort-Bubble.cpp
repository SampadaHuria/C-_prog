Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements
if they are in the wrong order.
This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
Time Complexity: O(N2)
Auxiliary Space: O(1)
Bubble sort takes minimum time (Order of n) when elements are already sorted.
Hence it is best to check if the array is already sorted or not beforehand, to avoid O(N2) time complexity.
Yes, Bubble sort performs the swapping of adjacent pairs without the use of any major data structure. 
Hence Bubble sort algorithm is an in-place algorithm.
Yes, the bubble sort algorithm is stable.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int counter=1;
while(counter<n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter++;
}

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}