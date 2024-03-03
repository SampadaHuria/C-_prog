#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rem;
    int sum=0;
    int temp=n;

    while(n>0){
        rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;
    }
    if(sum==temp){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }
}