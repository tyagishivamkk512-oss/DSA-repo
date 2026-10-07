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

Node* segregate(Node* head) {
        Node* zeroh = new Node(0);
        Node*z = zeroh;
        Node* oneh = new Node(0);
        Node* o = oneh;
        Node* twoh = new Node(0);
        Node* t = twoh;

        Node* p = head;
        while(p){
            if(p->data == 0){
                z->next = p;
                z=z->next;
            }
            else if(p->data == 1){
                o->next = p;
                o=o->next;
            }
            else if(p->data == 2){
                t->next = p;
                t=t->next;
            }
            p=p->next;
        }
        if (oneh->next) {
                    z->next = oneh->next;
                    o->next = twoh->next;
                } else {
                    z->next = twoh->next;
                }

                t->next = nullptr;

                Node* newHead = zeroh->next;

                delete zeroh;
                delete oneh;
                delete twoh;

                return newHead;
        
        return zeroh->next;
    }