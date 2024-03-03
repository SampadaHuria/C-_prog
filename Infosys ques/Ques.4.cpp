/*4.Add One to the Number
You are given a linked list representing a number such that each individual node acts as a digit 
of the number. The list HEADHEAD->11->22->33->NULLNULL corresponds to the number 
123. Your task is to add 1 to this number.
Input Format
The first line contains an integer TT, number of test cases. Then follows TT test cases. Each 
test case consists of two lines. The first line contains an integer NN representing length of the 
linked list The second line contains NN space separated integers representing nodes of a linked 
list.
Output Format
The output contains TT lines, each line containing the modified number as a linked list. Note -
You only need to implement addOneToList() function, and return the head of the linked list.
Example
Sample Input
2 3 1 2 3 4 9 9 9 9
Sample Output
1 2 4 1 0 0 0 0*/

#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    ListNode* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

ListNode* addOneToList(ListNode* head) {
    head = reverseList(head);

    ListNode* current = head;
    int carry = 1;

    while (current != nullptr) {
        int sum = current->val + carry;
        current->val = sum % 10;
        carry = sum / 10;

        if (carry == 0) {
            break;  // No need to continue if carry becomes 0
        }

        if (current->next == nullptr && carry > 0) {
            current->next = new ListNode(carry);
            break;
        }

        current = current->next;
    }

    return reverseList(head);
}

// Utility function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;

            ListNode* newNode = new ListNode(val);
            if (head == nullptr) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        head = addOneToList(head);
        printList(head);
    }

    return 0;
}

//Output
// 2
// 3
// 1 2 3
// 1 2 4
// 4
// 9 9 9 9
// 1 0 0 0 0
