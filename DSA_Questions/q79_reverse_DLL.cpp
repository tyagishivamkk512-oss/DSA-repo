    #include <bits/stdc++.h>
    using namespace std;

    struct Node {
        int data;
        Node* next;
        Node* prev;

        Node(int value, Node* nextp, Node* backp){
            data = value;
            next = nextp;
            prev = backp;
        }
        Node(int value){
            data = value;
            next = nullptr;
            prev = nullptr;
        }
    };

    Node* reverse(Node* head){
        Node* front = nullptr;
        Node* back = nullptr;
        Node* curr = head;
        while(curr != nullptr){
            front = curr->next;
            curr->next = back;
            curr->prev = front;
            back->prev = curr;
            front->next = curr;
            back = curr;
            curr = front;
        }
        return back;
    }