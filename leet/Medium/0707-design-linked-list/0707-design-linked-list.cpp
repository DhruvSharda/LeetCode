class MyLinkedList {
public:
    struct Node{
        int val;
        Node* next;
    };

    Node* head;
    
    MyLinkedList() {
        head=nullptr;
    }
    
    int get(int index) {
        int i=0;
        Node* temp1=head;
        while(temp1!=nullptr){
            if(i==index){
                return temp1->val;
            }
            i++;
            temp1=temp1->next;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* temp2=new Node();
        temp2->val=val;
        temp2->next=head;
        head=temp2;
    }
    
    void addAtTail(int val) {
        Node* temp3= new Node();
        temp3->val=val;
        temp3->next=nullptr;
        Node* temp4=head;
        if(temp4==nullptr){
            head=temp3;
            return;
        }
        while(temp4->next!=nullptr){
            temp4=temp4->next;
        }
        temp4->next=temp3;
    }
    
    void addAtIndex(int index, int val) {
        Node* temp6=head;
        if(temp6==nullptr && index==0){
            head=new Node();
            head->val=val;
            head->next=nullptr;
            return;
        }
        Node* temp5= new Node();
        temp5->val=val;
        if(index==0){
            temp5->next=head;
            head=temp5;
            return;
        }
        
        int i=0;
        while(temp6!=nullptr){
            if(i==index-1){
                temp5->next=temp6->next;
                temp6->next=temp5;
                return;
            }
            temp6=temp6->next;
            i++;
        }
    }
    
    void deleteAtIndex(int index) {
        Node* temp7=head;
        int i=0;
        if(head==nullptr){
            return;
        }        
        if(temp7->next==nullptr && index==0){
            delete temp7;
            head=nullptr;
            return;
        }
         if(index==0){
            head=head->next;
            delete temp7;
            return;
        }
        while(temp7->next!=nullptr){
            if(i==index-1){
                Node* temp8=temp7->next;
                temp7->next=temp7->next->next;
                delete temp8;
                return;
            }
            temp7=temp7->next;
            i++;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */