#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int value, Node* nextp, Node* backp){
        data = value;
        next = nextp;
        back = backp;
    }
    Node(int value){
        data = value;
        next = nullptr;
        back = nullptr;
    }
};

Node* convert(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* p = head;
        for(int i = 1; i < arr.size(); i++){
            Node* temp = new Node(arr[i]);
            p->next = temp;
            temp->back = p;
            p = temp;
        }
        return head;
    }

void traverse(Node* head){
    Node* mover = head;
    while(mover != NULL){
        cout << mover->data << " ";
        mover = mover->next;
    }
}

int count(Node* head){
    Node*p = head;
    int count = 0;
    while(p!=NULL){
        count++;
    }
    return count;
}

int main(){
    vector <int> arr = {1,2,3,4,5,5};
    Node* head = convert(arr);
    cout << head->data << endl;
    traverse(head);
}