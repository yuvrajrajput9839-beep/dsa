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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode *cur=head;
        ListNode *pr=head;
        while(cur!=NULL){
            if (pr->val==cur->val){
                if(cur->next==NULL){
                    pr->next=cur->next;
                }
                cur=cur->next;

            }
            else{
                pr->next=cur;
                pr=cur;
                cur=cur->next;
            }
        }
        return head;

        
    }
};