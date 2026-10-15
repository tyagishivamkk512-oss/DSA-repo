#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

vector<vector<int>> givenSumPairs(Node* head, int target) {
        Node* p = head;
        
        vector<vector<int>> ans;
        if(!head->next) return ans;

        while(p->next){
            p=p->next;
        }
        Node* q = p;
        p = head;
        while(p!=q && p->prev != q){
            if((p->data + q->data) == target){
                ans.push_back({p->data,q->data});
                p=p->next; q = q->prev;
            }
            else if((p->data + q->data) > target)
                q=q->prev;
                
            else p = p->next;
        }
        return ans;
    }