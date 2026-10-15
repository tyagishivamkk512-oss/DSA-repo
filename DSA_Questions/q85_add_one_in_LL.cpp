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

Node* reverse(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* nxt = nullptr;
    
    while(curr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

Node* addOne(Node* head) {
        head = reverse(head);
        Node* p = head;
        while(p){
            if(p->data < 9){
                p->data ++;
                return reverse(head);
            }
            p->data = 0;
            p=p->next;
        }
        Node* temp  = new Node(1);
        temp->next = reverse(head);
        return temp;
    }
    // time complexity: O(n) and space complexity: O(1)