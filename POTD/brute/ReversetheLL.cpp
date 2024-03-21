class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
      ListNode* current = head;
      ListNode* Prev = nullptr;
      while(current != nullptr){
        ListNode* temp = current -> next;
        current->next = Prev;
        Prev = current;
        current = temp;
      }
    return Prev;
    }
};