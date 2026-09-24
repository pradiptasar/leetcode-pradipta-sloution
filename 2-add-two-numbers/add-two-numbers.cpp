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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        int num=0;

        int remainder =0;

        int num1 =0;

       while(l1 && l2){
        
        num = l1->val + l2->val;
        if(remainder == 1){
            num+=1;
        }
        num1 = num%10;

        remainder = num /10;

        curr->next = new ListNode(num1);
        curr = curr->next;

        l1 = l1->next;
        l2 = l2->next;
       }

       while(l1){
        
        num = l1->val;
        if(remainder == 1){
            num+=1;
        }
        num1 = num%10;

        remainder = num /10;

       curr->next = new ListNode(num1);
        curr = curr->next;

        l1 = l1->next;
       }

       while( l2){
        
        num = l2->val;
        if(remainder == 1){
            num+=1;
        }
        num1 = num%10;

        remainder = num /10;

       curr->next = new ListNode(num1);
        curr = curr->next;

        l2 = l2->next;
       }

       if(remainder ==1){
        curr->next = new ListNode(1);

       }



       return dummy->next;


        
    }
};