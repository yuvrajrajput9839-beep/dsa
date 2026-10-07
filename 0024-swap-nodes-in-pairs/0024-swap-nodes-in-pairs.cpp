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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            ListNode* np = curr->next;
            ListNode* nextPair = np->next;

            
            np->next = curr;
            curr->next = nextPair;
            prev->next = np;

            
            prev = curr;
            curr = nextPair;
        }

        return dummy.next;
    }
};