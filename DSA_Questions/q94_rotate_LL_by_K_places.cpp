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

Node* rotateRight(Node* head, int k) {
        if (!head || !head->next) return head;

        Node* p = head;
        int cnt = 0;

        while (p) {
            cnt++;
            p = p->next;
        }

        k %= cnt;
        if (k == 0) return head;

        p = head;
        Node* x = head;

        while (k--) {
            p = p->next;
        }

        while (p->next) {
            p = p->next;
            x = x->next;
        }

        p->next = head;
        head = x->next;
        x->next = nullptr;

        return head;
    }
// time complexity: O(n) and space complexity: O(1)