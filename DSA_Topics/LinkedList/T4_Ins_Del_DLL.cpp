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
            p = temp;
        }
        return head;
    }

Node* insert(Node* head, int value, int pos){
        Node* temp = new Node(value);
        if(pos == 1){
            temp->next = head;
            head->back = temp;
            return temp;
        }
        Node* p = head;
        int i = 1;
        while(i < pos-1){
            p = p->next;
            i++;
        }
        temp->next = p->next;
        temp->back = p;
        p->next->back = temp;
        p->next = temp;
        return head;
    }

Node* deletion(Node* head, int pos){
        Node* p = head;
        if(pos == 1){
            Node* q = head;
            head = head->next;
            head->back = NULL;
            free(q);
            return head;
        }
        int i = 1;
        while(i < pos-1){
            p = p->next;
            i++;
        }
        Node*q = p->next;
        p->next = q->next;
        q->next->back = p;
        free(q);
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