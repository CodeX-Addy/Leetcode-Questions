
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        ListNode* dummyNode = new ListNode(0);
        unordered_map<int, ListNode*>mp;
        dummyNode->next = head;
        mp[0] = dummyNode;

        while(head){
            prefixSum += head->val;
            if(mp.find(prefixSum) != mp.end()){
                //main logic
                ListNode* start = mp[prefixSum];
                int prev = prefixSum;
                while(start && start != head){
                    start = start->next;
                    prev += start->val;
                    if(start != head){
                        mp.erase(prev);
                    }
                    mp[prefixSum] -> next = start->next;
                }
            }
            else{
                mp[prefixSum] = head;
            }
            head = head->next;
        }
        return dummyNode->next;
    }
};
