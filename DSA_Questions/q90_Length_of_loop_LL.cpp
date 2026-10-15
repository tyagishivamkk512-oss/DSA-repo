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
int lengthOfLoop(Node *head) {
		Node* slow = head;
		Node* fast = head;
		bool flag = true;
		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast) {
				flag = false;
				break;
			}
		}
		if (flag)
			return 0;
		slow = head;
		while (slow != fast) {
			slow = slow->next;
			fast = fast->next;
		}
		int cnt = 1;
		fast = fast->next;
		while(slow!=fast){
		    cnt++;
		    fast = fast->next;
		}
		return cnt;
	}
// time complexity: O(n) and space complexity: O(1)