/*3.Clever Friend
Aman and Raman are friends as well as neighbors. They used to share everything, play 
together, and like to spend most of the time together. Raman being clever also sometimes take 
advantage of Aman like give him the homework to complete by making excuses and his projects 
are also made by Aman. As exams are going on and both of them are preparing for exams then 
suddenly Aman realizes that his science book is missing so he asked Raman to give him the 
book for few hours but being clever Raman puts condition and provided him with the array AA
with NN integers and twisted the little by adding that he has to find the count of the cool
subarrays i.e.the subarray which has the sum of all elements in it a perfect square and told 
Aman to solve this first if he needs the book. So tomorrow they are having the exam, so Aman 
wants your help in solving it so that he can get the book and can prepare for his exam.
Input Format
The first line of the input contains an integer NN where NN denotes the length of the array. The 
second line conatins NN space integers A1,A2,A3,....ANA1,A2,A3,....AN.
Output Format
Print the count of the subarray for which the sum of the elements is a perfect square.
Time Limit
1 second
Constraints
1≤T≤5∗1031≤T≤5∗103 2≤Ai≤1062≤Ai≤106
Example
Sample Input
4 1 4 3 2
Sample Output
3
Sample Test case Explanation
The given array is : 11 44 33 22
let us list the sum of all possible subarrays: [1,1]=1[1,1]=1 [1,2]=1+4=5[1,2]=1+4=5
[1,3]=1+4+2=7[1,3]=1+4+2=7 [1,4]=1+4+2+3=10[1,4]=1+4+2+3=10 [2,2]=4[2,2]=4
[2,3]=4+2=6[2,3]=4+2=6 [2,4]=4+2+3=9[2,4]=4+2+3=9 [3,3]=2[3,3]=2 [3,4]=2+3=5[3,4]=2+3=5
[4,4]=3[4,4]=3
[1,4,9]=3*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}

int countCoolSubarrays(int n, vector<int>& arr) {
    int count = 0;
    int prefixSum = 0;
    vector<int> prefixSums(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        prefixSum += arr[i];
        prefixSums[i + 1] = prefixSum;

        for (int j = 0; j <= i; ++j) {
            int subarraySum = prefixSums[i + 1] - prefixSums[j];
            if (isPerfectSquare(subarraySum)) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = countCoolSubarrays(n, arr);
    cout << result << endl;

    return 0;
}

