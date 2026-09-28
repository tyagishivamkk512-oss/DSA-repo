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

// Brute Force Approach
Node* reverse_brute(Node* head) {
        if(!head) return nullptr;

        vector<int> v;
        Node* p = head;
        while(p != NULL){
            v.emplace_back(p->data);
            p=p->next;
        }
        p = head;
        for(int i = v.size()-1; i>=0;i--){
            p->data = v[i];
            p=p->next;
        }
        return head;
    }
    // time complexity: O(n) and space complexity: O(n)

// Optimal Approach
Node* reverse_optimal(Node* head){
    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

    }
    return prev;
}
// time complexity: O(n) and space complexity: O(1)