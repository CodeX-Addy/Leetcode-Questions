/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int getLength(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            ++len;
            temp = temp->next;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = getLength(headA);
        int l2 = getLength(headB);

        while(l1 < l2){
            headB = headB->next;
            l2--;
        }

        while(l1 > l2){
            headA = headA->next;
            l1--;
        }

        while(headA && headB && headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};
