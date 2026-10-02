class Solution {
public:

/*

-> a[0] -> a[n-1] 
->a[1] -> a[2] 

n e a t  
t a e n 

*/

    void reverseString(vector<char>& s) {
        
        int n =  s.size() ; 

      int l =0; 
      int r = n -1  ; 

      while(l < r){
        swap(s[l] , s[r]); 
        l++; 
        r-- ; 
      }
  
    }
};