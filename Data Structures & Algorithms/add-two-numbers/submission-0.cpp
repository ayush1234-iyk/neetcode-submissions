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

//  dono liked list ka sum return krna h  
//  kaise hoga ek dummy node bnana hoga and then one by 
//  one add krke uska val final dummy me add krna hoga 
//  big work is to addition in ll 


// dummy aur curr initialize karna.

// Jab tak l1, l2 ya carry bacha ho, loop chalana.

// Dono lists ki values lena; missing node ki value 0 rakhna.

// sum, digit aur carry calculate karna.

// Naya node attach karke curr aage badhana.

// l1 aur l2 pointers ko aage badhana, agar woh nullptr nahi hain.

// return dummy.next.



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

            ListNode* dummy = new ListNode(0) ; 
            ListNode* tail = dummy ; 
            int carry =0 ;

            while(l1 != nullptr || l2 != nullptr || carry != 0 ){

              int x  =0 ; 
              int y =0 ;

              if(l1 != nullptr){
                x = l1->val ;
              }
              if(l2 != nullptr) {
                y = l2->val ; 
              }

            int sum = x + y + carry ; 

            int digit = sum%10 ; 
            carry = sum /10 ; 

            tail->next = new ListNode(digit) ; 
            tail = tail->next  ; 

            if(l1 != nullptr)  l1 =l1->next  ;
            if(l2 != nullptr)  l2 = l2->next  ; 

            }
return dummy->next ; 
    }   
};
