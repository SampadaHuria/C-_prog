#include<iostream>
using namespace std;

//RECTANGLE PATTERN

// * * * * * * 
// * * * * * * 
// * * * * * * 
// * * * * * * 
// * * * * * * 

int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
        cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

//HOLLOW RECTANGLE PATTERN

// ******
// *    *
// *    *
// *    *
// ******

int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

//INVERTED HALF PYRAMID

// *****
// ****
// ***
// **
// *

int main(){
    int n;
    cin>>n;
    while(n--){
        for(int i=0;i<n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//HALF PYRAMID AFTER 180 DEGREE ROTATION

//      *
//     **
//    ***
//   ****
//  *****
// ******

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

//HALF PYRAMID USING NUMBERS

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5 

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<i<<" ";
       }
       cout<<endl;
    }
}

//FLOYD'S TRIANGLE

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

//INVERTED PATTERN

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

int main(){
    int n;
    cin>>n;
    while(n--){
        for(int i=1;i<=n+1;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

//0-1 PATTERN

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

 //RHOMBUS PATTERN
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    int space=n-i;
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
     for(int j=1;j<=n;j++){
        cout<<"*"<<" ";
     }
    cout<<endl;
}
}

//NUMBER PATTERN
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=n-i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//DIAMOND PATTERN
//         *
//       * * *
//     * * * * * 
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         * 

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
       for(int j=1;j<=2*i-1;j++){
           cout<<"* ";
       }
       cout<<endl;
        } 
          for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
       for(int j=1;j<=2*i-1;j++){
           cout<<"* ";
       }
       cout<<endl;
        } 
}

//ZIG-ZAG PATTERN
//   *   *  
//  * * * * 
// *   *   *

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0 || i==2 && j%4==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
