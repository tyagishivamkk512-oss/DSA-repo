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

// brute force approach

    Node* removeNthFromEnd(Node* head, int n) {
        int cnt = 0;
        Node* p = head;
        while(p!= NULL){
            cnt++;
            p = p-> next;
        }
        if(cnt == 1) return nullptr;
        if(cnt == n){
            Node* q = head;
            head = head->next;
            delete q;
            return head;
        }

        p = head;
        int x = 1;
        while(x < (cnt - n)){
            p = p->next;
            x++;
        }
        Node* q = p-> next;
        p -> next = q->next;
        delete q;
        return head;
    }
    // time complexity: O(n) and space complexity: O(1)
    

// optimal approach

    Node* removeNthFromEnd_optimal(Node* head, int n){
        Node* one = head;
        Node* two = head;
        int x = n;
        while(x>0){
            one = one->next;
            x--;
        }
        while(one->next != nullptr){
            one = one->next;
            two = two->next;
        }
        Node*q = two->next;
        two->next = q->next;
        delete q;
        return head;

    }
    // time complexity: O(n) and space complexity: O(1)
 
