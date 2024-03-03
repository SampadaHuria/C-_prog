#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max_ele=INT_MIN;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        max_ele=max(max_ele,arr[i]);
        cout<<max_ele<<endl;
    }
}