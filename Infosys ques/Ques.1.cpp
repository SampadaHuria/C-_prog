/*1.String_Game 
Like Every year, again this year a coding challenge was conducted by the geek's man group. 
Based on these challenges, geeks mean group offers scholarships, goodies, prize money, and 
other stuff to students who participated in the contest. This year, Alex and his friend Bob 
participated in the contest. Alex solved all the questions while Bob didn't as he spent so much 
time on one question in which he was having a binary string SS of even length NN and twisted 
the little by adding that string only contains N/2N/2 zero and N/2N/2 ones. To make the question 
more complex it's added that he can reverse any substring of SS in one operation. So he has 
to find the minimum number of operations to make the string SS alternating. So he wants your 
help in figuring out the solution as he feels dishonored if he takes help from Alex. Note: A 
substring of a string is a contiguous subsequence of that string SS and its alternating if 
Si≠Si+1Si≠Si+1 for all ii. 
Input Format
The first contains an integer TT where TT denotes the number of test cases. The first line of 
each test case contains a single integer NN where NN denotes the length of the string SS. The 
second line of each test case contains binary string SS of length NN and has exactly N/2N/2
zeroes and N/2N/2 ones.
Output Format
Print the minimum operations required to make string SS alternating.
Time Limit
1 second
Constraints
1≤T≤5∗1041≤T≤5∗104 2≤N≤1052≤N≤105 Note: It's guaranteed that the total sum of NN over 
test cases doesn't exceed 105105.
Example
Sample Input
3 4 0110 8 11101000 4 1001
Sample Output
1 2 1
Sample Test case Explanation
In the second test case, we can make it in two operations. 1.1. 11101000 −>−> 10101100. 2.2.
10101100−>−> 10101010.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> min_operations_to_alternate(int t, vector<pair<int, string>>& test_cases) {
    vector<int> results;

    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first;
        string s = test_cases[i].second;

        int count = 0;
        for (int j = 0; j < n; j += 2) {
            // Check for equality between opposite digits
            if (s[j] == s[j + 1]) {
                count++;
            }
        }

        results.push_back(count);
    }

    return results;
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, string>> test_cases;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        test_cases.push_back({n, s});
    }

    vector<int> results = min_operations_to_alternate(t, test_cases);

    for (int result : results) {
        cout << result << " ";
    }

    return 0;
}
