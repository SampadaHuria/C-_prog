/*2.Zip Linked List 
You are given the head of the Singly linked list of arbitrary length KK. Your task is to zip the 
linked list in-place (i.e., doesn't create a brand new linked list) and return it's head.
A linked list is zipped if it's nodes are in the following order, where KK is the length of the linked 
list:
• 1st node -> Kth node -> 2nd node -> (k-1)th node -> 3rd node -> (k-2)th node -> ....
Note - You can assume that the input linked list will always have atleast one node, in other 
words, the head will never be NULL.
Input Format
The first line of input contains a single integer TT - denoting the number of test cases. Each 
test case follows:
• The first line of each test case contains a single integer KK, denoting the size of the 
linked list
• The second line contains KK space-separated integers - denoting the elements of the 
list.
Output Format
The output contains TT lines, each line containing the modified list. Note - You only need to 
implement zipLinkedList(), and return the head of the linked list.
Constraints
1≤T≤1001≤T≤100 1≤K≤100001≤K≤10000
Time Limit
1 second
If the linked list has a length of K, the order of nodes in the modified linked list should be as follows:
1st node
Kth node
2nd node
(K-1)th node
3rd node
(K-2)th node
... and so on.
For example, let's consider the original linked list with elements [1, 2, 3, 4, 5, 6] and K = 6.
The modified linked list should be [1, 6, 2, 5, 3, 4].*/

// To solve this problem, you can follow these steps:

// Find the middle of the linked list using the two-pointer technique.
// Reverse the second half of the linked list.
// Merge the first and reversed second halves alternately.

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

ListNode* zipLinkedList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Step 1: Find the middle of the linked list
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse the second half of the linked list
    ListNode* secondHalf = reverseList(slow->next);
    slow->next = nullptr;  // Break the original list

    // Step 3: Merge the first and reversed second halves alternately
    ListNode* firstHalf = head;

    while (secondHalf != nullptr) {
        ListNode* nextFirst = firstHalf->next;
        ListNode* nextSecond = secondHalf->next;

        firstHalf->next = secondHalf;
        secondHalf->next = nextFirst;

        firstHalf = nextFirst;
        secondHalf = nextSecond;
    }

    return head;
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
        int k;
        cin >> k;

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for (int i = 0; i < k; ++i) {
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

        head = zipLinkedList(head);
        printList(head);
    }

    return 0;
}


//Output
// 2
// 7
// 1 2 6 3 4 5 6
// 1 6 2 5 6 4 3
// 2
// 7 8
// 7 8