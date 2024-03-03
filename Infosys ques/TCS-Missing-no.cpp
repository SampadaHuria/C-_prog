Sum of n integer elements is: n(n+1)/2. Here we are missing one element which means we should 
replace n with n+1 so the total of elements in our case becomes: (n+1)(n+2)/2. 
Once we have the total, we are removing all the elements that user has entered from the total, 
this way the remaining value is our missing number.

#include <iostream>
using namespace std;
int findMissingNo (int arr[], int len){
   int sum;  
   sum = ((len+1)*(len+2))/2;  
   for (int i = 0; i<len; i++)    
      sum -= arr[i];  
   return sum;
}
int main() {
   int n;   
   cout<<"Enter the size of array: "; 
   cin>>n;   
   int arr[n-1];  
   cout<<"Enter array elements: ";   
   for(int i=0; i<n; i++){    
      cin>>arr[i];  
   } 
   int missingNo = findMissingNo(arr,5); 
   cout<<"Missing Number is: "<<missingNo;
   return 0;
}



class MissingNumber {
   public static int missingNumber(int[] arr) {
       int i=0,n=arr.length+1;
       //Calculate sum of n natural numbers and store it
       int sum=0,sumOfNatural=n*(n-1)/2;
      //Loop through the array and calculate the sum of the elements of the array
       for(i=0;i<n-1;i++){
           sum+=arr[i];
       }
      //Return the difference of both
       return sumOfNatural - sum;
   }
   public static void main(String []args){
      //Input array
       int []arr = {3,4,2,0,1,6};
       int result = missingNumber(arr);
       System.out.println(result);
   }
}