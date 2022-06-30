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
ListNode* reverse(ListNode* head){
       ListNode* curr = head;
       ListNode* prev = NULL;
       while(curr != NULL){
           ListNode* temp = curr -> next;
           curr -> next = prev;
           prev = curr;
           curr = temp;
       }
       
       return prev;
   }
   bool isPalindrome(ListNode* head) {
       ListNode* slow = head;
       ListNode* fast = head;
       
       while(fast -> next != NULL && fast -> next -> next != NULL){
           fast = fast -> next -> next;
           slow = slow -> next;
       }
       
       ListNode* p1 = head;
       ListNode* p2 = reverse(slow->next);
       
     
       
       while(p2 != NULL){
           if(p1 -> val != p2 -> val)
               return false;
           
           p1 = p1 -> next;
           p2 = p2 -> next;
       }
       
       
       return true;
   }
};