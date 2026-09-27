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
Node* convert(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* p = head;
        for(int i = 1; i < arr.size(); i++){
            Node* temp = new Node(arr[i]);
            p->next = temp;
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

int main(){
    vector <int> arr = {1,2,3,4,5,5};
    Node* head = convert(arr);
    cout << head->data << endl;
    traverse(head);
}