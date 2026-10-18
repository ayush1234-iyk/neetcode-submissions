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

 /*
 
 basic observation is to first compare val of the list one by one 
 if found it smaller then put it first and then goses with another list 

 finally ,  if any number is left then it will goes inside the list  

 

 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* dummy = new ListNode(0) ;
        ListNode* tail = dummy  ;  
        
        while(list1 != nullptr && list2 != nullptr ){
            if(list1->val < list2->val){
           tail->next = list1  ; 
           list1 = list1->next  ; 

        }
        else {
            tail->next = list2  ; 
            list2 = list2->next ; 
        }
            tail = tail->next  ; 
        }

       
       if(list1 != nullptr) tail->next  = list1  ; 
       if(list2 != nullptr) tail->next = list2 ; 

        return dummy->next ; 

    }
};
