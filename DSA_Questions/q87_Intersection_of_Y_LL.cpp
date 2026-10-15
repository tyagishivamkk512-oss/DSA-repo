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
//brute force approach
Node *getIntersectionNode(Node *headA, Node *headB) {
        Node *a = headA;
        while(a){
            Node *b = headB;
            while(b){
                if(a == b) return a;
                b = b->next;
            }
            a = a->next;
        }
        return nullptr;
    }
    // time complexity: O(n*m) and space complexity: O(1)

// optimal approach 
Node *getIntersectionNode_optimised(Node *headA, Node *headB) {
        Node *a = headA;
        Node *b = headB;
        while(a != b){
            if(a) a = a->next;
            else a = headB;

            if(b) b = b->next;
            else b = headA;
        }
        return a;
    }
// time complexity: O(n+m) and space complexity: O(1)

// we can also use hashing to store the address of nodes of one linked list
// and then traverse the other linked list to check if any node is present in the hash table.