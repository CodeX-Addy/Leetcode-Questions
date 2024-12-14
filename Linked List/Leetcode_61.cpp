class Solution {
public:

    int getlength(ListNode* head){
        int len = 0;
        while(head){
            ++len;
            head = head->next;
        }
        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;
        int len = getlength(head);
        int rotateK = k%len;
        if(rotateK == 0) return head;
        int pos = len - rotateK - 1;
        ListNode* newNode = head;
        for(int i=0; i<pos; i++){
            newNode = newNode->next;
        }
        ListNode* newHead = newNode->next;
        newNode->next = 0;
        ListNode* it = newHead;
        while(it->next){
            it = it->next;
        }
        it->next = head;
        return newHead;
    }
};
