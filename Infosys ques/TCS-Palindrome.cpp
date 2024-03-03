#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}

//Word palindrome

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==true){
        cout<<"Word is a palindrome";
    }
    else{
        cout<<"Word is not a palindrome";
    }
}