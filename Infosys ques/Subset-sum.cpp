#include <iostream>
#include <vector>
#include <algorithm>  // for sort
using namespace std;

class Solution {
public:
    void func(int ind, int sum, vector<int>& arr, int N, vector<int>& sumSubset) {
        if (ind == N) {
            sumSubset.push_back(sum);
            return;  // added return to avoid unnecessary recursive calls
        }
        // pick the element
        func(ind + 1, sum + arr[ind], arr, N, sumSubset);
        // not pick the element
        func(ind + 1, sum, arr, N, sumSubset);
    }

public:
    vector<int> subsetSum(vector<int>& arr, int N) {
        vector<int> sumSubset;
        func(0, 0, arr, N, sumSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<int> arr = {1, 2, 3};
    int N = arr.size();

    vector<int> result = solution.subsetSum(arr, N);

    cout << "Subset Sums: ";
    for (int sum : result) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
