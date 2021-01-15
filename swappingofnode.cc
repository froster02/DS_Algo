class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return head;
        ListNode* temp1 = head;
        ListNode* temp2 = head;

        for(int temp1 = head; temp1 < (temp1 != NULL); temp1 = ((temp1->next)->next)) {
            if(temp1->data < temp2->data && (temp1 != NULL))
                swap(temp1, temp2);
            
            if(temp1 < temp3)
                swap(temp1, temp3);
            temp2 = temp1->next;
        }
        return head;
    }
};