struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

Node* removeDuplicates(Node* head) {
        Node* p = head;
        
        if(!head->next) return head;

        while(p&&p->next){
            if(p->data==p->next->data){
                if(!p->next->next) p->next=nullptr;
                else{
                    Node* q = p->next;
                    q->next->prev = q->prev;
                    q->prev->next = q->next;
                }
                
            }
            else p = p->next;
        }
        return head;
    }
// time complexity: O(n) and space complexity: O(1)