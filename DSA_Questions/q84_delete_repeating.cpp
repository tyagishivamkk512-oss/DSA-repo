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

Node* deleteDuplicates(Node* head) {
        Node* p = head;
        if(head == nullptr) return head;
        while(p->next != nullptr){
            if(p->data == p->next->data){
                Node* q = p->next;
                p->next = q->next;
                delete q;
            }
            else{
                p = p->next;
            }
        }
        return head;
    }
    // time complexity: O(n) and space complexity: O(1)