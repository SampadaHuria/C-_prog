/*Given an algebraic expression with + and *, find the minimum and maximum values.
For example,
Sample Input:
1+2*3+4*5
Sample Output:
27
105
Explanation:
1 + (2 * 3) + (4 * 5) = 27 (Minimum)
(1 + 2) * (3 + 4) * 5 = 105 (Maximum)*/

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int evaluate(char op, int a, int b) {
    if (op == '+') return a + b;
    else if (op == '*') return a * b;
    return 0;
}

pair<int, int> minAndMaxValues(string expression) {
    vector<int> numbers;
    vector<char> operators;

    stringstream ss(expression);
    int num;
    char op;

    while (ss >> num) {
        numbers.push_back(num);
        if (ss >> op) {
            operators.push_back(op);
        }
    }

    int n = numbers.size();
    vector<vector<int>> minVal(n, vector<int>(n, INT_MAX));
    vector<vector<int>> maxVal(n, vector<int>(n, INT_MIN));

    for (int i = 0; i < n; i++) {
        minVal[i][i] = numbers[i];
        maxVal[i][i] = numbers[i];
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;

            for (int k = i; k < j; k++) {
                int tempMin = evaluate(operators[k], minVal[i][k], minVal[k + 1][j]);
                int tempMax = evaluate(operators[k], maxVal[i][k], maxVal[k + 1][j]);

                minVal[i][j] = min(minVal[i][j], tempMin);
                maxVal[i][j] = max(maxVal[i][j], tempMax);
            }
        }
    }

    return {minVal[0][n - 1], maxVal[0][n - 1]};
}

int main() {
    string expression;
    cin >> expression;

    pair<int, int> result = minAndMaxValues(expression);

    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}
