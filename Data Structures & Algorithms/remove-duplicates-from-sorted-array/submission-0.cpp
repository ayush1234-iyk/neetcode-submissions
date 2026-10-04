class Solution {
public:

//use set 

    int removeDuplicates(vector<int>& nums) {
        
        set<int> st(nums.begin() , nums.end()) ; 

    int i =0 ; 
    for(auto it : st){
        nums[i++] = it ; 
    }

     return st.size()  ;

    }
};