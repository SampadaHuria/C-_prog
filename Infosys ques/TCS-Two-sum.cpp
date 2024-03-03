#include<iostream>
using namespace std;

bool twosum(int arr[],int n,int k){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n-1;j++){
        if(arr[i]+arr[j]==k){
            cout<<i<<" "<<j<<endl;  //return indices
            return true;
        }
    }
}
return false;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout<<twosum(arr, n, k);

    return 0;
}