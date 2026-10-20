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

Node* mergeTwoLists(Node* list1, Node* list2) {
        if(!list1 && list2) return list2;
        if(!list2 && list1) return list1;
        Node* p = list1;
        Node* q = list2;
        Node* head = new Node(-1);
        Node* temp = head;

        while(p && q){
            if(p->data <= q->data){
                Node* k  = p;
                p=p->next;
                temp->next = k;
                temp = k;
                k->next = nullptr;
            }
            else{
                Node* k  = q;
                q=q->next;
                temp->next = k;
                temp = k;
                k->next = nullptr;
            }
        }
        if(p) temp->next = p;
        if(q) temp->next = q;
        return head->next;
    }