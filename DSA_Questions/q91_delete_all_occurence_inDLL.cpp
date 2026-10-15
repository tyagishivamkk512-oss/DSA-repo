struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

Node* deleteAllOccurOfX(Node* head, int x) {
        Node* p = head;
        bool flag = false;
        if(head->data == x){
            flag = true;
            p=p->next;
        }
        while(p){
            if(p->data == x){
                if(!p->next){
                    p->prev->next = nullptr;
                    p = nullptr;
                }
                else{
                    p->next->prev = p->prev;
                    p->prev->next = p->next;
                    p=p->next;
                }
            }
            else p = p->next;
        }
        if(flag){
            if(!head->next) return nullptr;
            else return head->next;
        }
        return head;
    }
// time complexity: O(n) and space complexity: O(1)