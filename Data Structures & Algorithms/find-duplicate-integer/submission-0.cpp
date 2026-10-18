class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n =  nums.size() ; 

        map<int , int> frq ; 

        for(int i =0 ; i< n ; i++){
            frq[nums[i]]++; 
        }

        for(auto it : frq){
            if(it.second > 1){
                return it.first ;
            }
        }
       return -1 ;
    }
};
