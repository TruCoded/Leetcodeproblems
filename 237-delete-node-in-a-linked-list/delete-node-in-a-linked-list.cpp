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
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode* prev=NULL;
        while (temp!=NULL) {
            temp->val=temp->next->val;
            if(temp->next->next==NULL){
                delete temp->next;
                temp->next=NULL;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
    }
};