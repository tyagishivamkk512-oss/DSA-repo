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
bool hasCycle_brute(Node *head){
    Node *p = head;
    unordered_set<Node*> s;
    while(p){
        if(s.find(p) != s.end()) return true;
        s.insert(p);
        p = p->next;
    }
    return false;
}
// time complexity: O(n) and space complexity: O(n)

//optimal approach
    bool hasCycle(Node *head) {
        if (!head || !head->next) return false;
        
        Node *slow = head;
        Node *fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;          
            fast = fast->next->next;   
            
            if (slow == fast) {
                return true;
            }
        }
        
        return false;
}
// time complexity: O(n) and space complexity: O(1)
