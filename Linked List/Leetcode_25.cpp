/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    int getLength(ListNode* &head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            ++len;
            temp = temp->next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        int len = getLength(head);
        if(len < k){
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        int pos = 0;
        ListNode* nextNode = curr->next;

        while(pos < k){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            ++pos;
        }

        if(nextNode != NULL){
            ListNode* rec = reverseKGroup(nextNode, k);
            head->next = rec; //Important case to remember
        }
        return prev;
    }
};
