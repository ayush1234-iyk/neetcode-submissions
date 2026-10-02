class Solution {
public:

/*

a b b a d c

a  b b d a 


*/

    bool  check(string &s , int l , int r) {

            while(l < r){

                if(tolower(s[l]) !=  tolower(s[r])){
                    return false  ; 
                }

                l++; 
                r-- ; 

            }
            return true ; 

    }

    bool validPalindrome(string s) {

        int n =  s.size() ; 

        int l =0 ; 
        int cnt  =0 ; 
        int r= n -1  ; 

        while(l < r){

            if(tolower(s[l]) !=  tolower(s[r])){
              return check(s , l+1 ,  r) || check(s , l  ,  r-1) ; 
            }
            l++; 
            r-- ; 

        }

    return true ; 
    }
};