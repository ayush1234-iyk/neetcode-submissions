class Solution {
public:

/*
  
  s = "zxyzxyz" 

 
*/
    int lengthOfLongestSubstring(string s) {

        int n = s.size() ; 
        int l =0 ; 
        int maxi = 0; 
        set<int> st  ; 

        for(int  i = 0 ; i<n ; i++){
            
           while(st.find(s[i]) != st.end()){
            st.erase(s[l]) ; 
            l++; 
           }

            st.insert(s[i]) ; 
            maxi = max(maxi , i -l+ 1) ; 

        }
        return maxi ; 
    }
};
