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

    Node* addnode(Node* last, int x){
        Node* temp = new Node(x);
        last->next = temp;
        return temp;
    }
    Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* p1 = l1;
        Node* p2 = l2;

        Node* head = new Node(0);
        Node* curr = head;

        int carry = 0;

        while(p1 && p2){
            int x = p1->data + p2->data + carry;
            if(x > 9){
                
                curr = addnode(curr,x-10);
                carry = 1;
            }

            else{
                curr = addnode(curr,x);
                carry = 0;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        while(p1){
            int x = p1->data + carry;
            if(x>9){
                curr = addnode(curr,x-10);
                p1 = p1->next;
                carry = 1;
            }
            else{
                curr = addnode(curr,x);
                p1 = p1->next;
                carry = 0;
            }
        }
        while(p2){
            int x = p2->data + carry;
            if(x>9){
                curr = addnode(curr,x-10);
                p2 = p2->next;
                carry = 1;
            }
            else{
                curr = addnode(curr,x);
                p2 = p2->next;
                carry = 0;
            }
        }
        if(carry == 1) curr = addnode(curr,1);
        return head->next;
    }
    // time complexity: O(max(n1,n2)) and space complexity: O(max(n1,n2))

// optimal approach 
 
Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* dummyHead = new Node(-1);
        Node* curr = dummyHead;

        Node* temp1 = l1;
        Node* temp2 = l2;

        int carry = 0;

        while (temp1 != nullptr || temp2 != nullptr) {
            int sum = carry;

            if (temp1)
                sum += temp1->data;

            if (temp2)
                sum += temp2->data;

            Node* newNode = new Node(sum % 10);

            carry = sum / 10;

            curr->next = newNode;
            curr = curr->next;

            if (temp1)
                temp1 = temp1->next;

            if (temp2)
                temp2 = temp2->next;
        }

        if (carry) {
            Node* newNode = new Node(carry);
            curr->next = newNode;
        }

        return dummyHead->next;
    }
    // time complexity: O(max(n1,n2)) and space complexity: O(max(n1,n2))