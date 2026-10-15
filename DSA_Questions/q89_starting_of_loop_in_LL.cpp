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
    Node *detectCycle(Node *head) {
        Node *p = head;
    unordered_set<Node*> s;
    while(p){
        if(s.find(p) != s.end()) return p;
        s.insert(p);
        p = p->next;
    }
    return nullptr;
}
// time complexity: O(n) and space complexity: O(n)

//optimal approach
    Node *detectCycle(Node *head) {
        Node* slow = head;
        Node* fast = head;
        bool flag = true;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                flag = false;
                break;
            }
        }
        if(flag) return nullptr;
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
// time complexity: O(n) and space complexity: O(1)