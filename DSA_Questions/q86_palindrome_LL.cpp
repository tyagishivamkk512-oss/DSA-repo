#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value, Node* nextp){
        data = value;
        next = nextp;
    }
    Node(int value){
        data = value;
        next = nullptr;
    }
};

Node* reverse(Node* head) {
        Node* prev = nullptr;

        while (head) {
            Node* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }

        return prev;
    }

    bool isPalindrome(Node* head) {
        if (!head || !head->next)
            return true;

        Node* slow = head;
        Node* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* second = reverse(slow->next);

        Node* p1 = head;
        Node* p2 = second;

        while (p2) {
            if (p1->data != p2->data)
                return false;

            p1 = p1->next;
            p2 = p2->next;
        }

        return true;
    }
// time complexity: O(n) and space complexity: O(1)