//***Solution By Ayush Shah ***
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return head;
        ListNode *currPtr = head->next; 
        ListNode *prevPtr = head;       
        while(currPtr)
        {
            if(currPtr->val == prevPtr->val)
                prevPtr->next = currPtr->next;
            else
                prevPtr = currPtr;
            currPtr = currPtr->next;
        }
        return head;
    }
};
