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

Node* oddEvenList(Node* head) {
        if(!head || !head->next) return head;
        Node* odd = head;
        Node* even = head->next;
        Node* evenhead = head->next;
        while(odd->next && even->next){
            odd->next = even->next;
            even->next = odd->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        return head;
    }

    // time complexity: O(n) and space complexity: O(1)
