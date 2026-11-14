/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //floyds cycle detection algorithm- 2 runners
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp1,*temp2;
        temp1=head;
        if(head == NULL || head->next==NULL)return false;
        temp2=(head->next)->next;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2)return true;
            temp1=temp1->next;
            if(temp2->next==NULL)return false;
            temp2=(temp2->next)->next;
        }
        return false;
    }
};