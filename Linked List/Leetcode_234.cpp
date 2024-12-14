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

    ListNode *reverseList(ListNode *head)
    {
            if (head == NULL)
                return NULL;
            ListNode *prev = NULL;
            ListNode *curr = head;
            while (curr != NULL)
            {
                ListNode *temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            return head = prev;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL){
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

    bool compare(ListNode* head1, ListNode* head2){
        while(head2 != NULL){
            if(head1->val != head2->val)
                return false;
            else{
                head1 = head1->next;
                head2 = head2->next;
            }     
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        //Break into two halves
        ListNode* midNode = middleNode(head);
        ListNode* head2 = midNode->next;
        midNode->next = NULL;
        //Reverse second list
        
        head2 = reverseList(head2);
        //Compare
        bool ans = compare(head, head2);
        return ans;
    }
};
