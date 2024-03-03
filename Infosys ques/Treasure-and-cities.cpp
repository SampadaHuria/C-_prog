/*Given two arrays t and c denoting the treasure and color in each city. A city can be visited or skipped. You can only move forward.
 Whenever you visit a city you get the following amount.
a*t[i] if the color of the previously visited city is the same as the current city
b*t[i] if the color of the previously visited city is different from the current city or it is the first city to be visited.
Given that a, b, t[] can be negative and c[] varies from 1 to n.
Find the maximum money that can be earned by visiting each city.
Sample Input:
a = 5, b = -7
Array size = 4
Treasure array: {4, 8, 2, 9 }
Color array: { 2, 2, 3, 2 }
Sample Output:
Maximum profit: 57
Explanation:
Visit cities in the order 1 -> 2-> 4
Maximum profit = (-7 * 4) + (8 * 5) + (9 * 5) = 57
Algorithm for treasure and cities problem
Input the a and b values.
Input the size of the treasure and color array.
Input the treasure and color arrays.
This problem is a variant of the 0-1 knapsack problem.
Try all possible combinations to get the maximum cost and return the maximum cost.*/




#include<iostream>
#include<vector>
using namespace std;

int getMaxProfit(int a, int b, int n, vector<int>& treasure, vector<int>& color) {
    int maxProfit = 0;

    // Initialize previous color to -1, indicating no previous city visited
    int prevColor = -1;

    for (int i = 0; i < n; i++) {
        // Calculate profit if we skip the current city
        int skipProfit = (i > 0 && color[i] != prevColor) ? maxProfit + b * treasure[i] : maxProfit;

        // Calculate profit if we visit the current city
        int visitProfit = maxProfit + a * treasure[i];

        // Choose the maximum profit between skipping and visiting the current city
        maxProfit = max(skipProfit, visitProfit);

        // Update previous color
        prevColor = color[i];
    }

    return maxProfit;
}

int main() {
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;

    vector<int> treasure(n), color(n);

    cout << "Enter the treasure array: ";
    for (int i = 0; i < n; i++) {
        cin >> treasure[i];
    }

    cout << "Enter the color array: ";
    for (int i = 0; i < n; i++) {
        cin >> color[i];
    }

    int maxProfit = getMaxProfit(a, b, n, treasure, color);

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
