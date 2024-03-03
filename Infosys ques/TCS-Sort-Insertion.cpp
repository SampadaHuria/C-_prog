The array is virtually split into a sorted and an unsorted part.
Values from the unsorted part are picked and placed in the correct position in the sorted part.
Time Complexity: O(N^2) 
Auxiliary Space: O(1)
Insertion sort takes the maximum time to sort if elements are sorted in reverse order.
And it takes minimum time (Order of n) when elements are already sorted. 
The Insertion Sort algorithm follows an incremental approach.
Yes, insertion sort is an in-place sorting algorithm.
Yes, insertion sort is a stable sorting algorithm.
Insertion sort is used when number of elements is small.
It can also be useful when the input array is almost sorted, and only a few elements are misplaced 
in a complete big array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}