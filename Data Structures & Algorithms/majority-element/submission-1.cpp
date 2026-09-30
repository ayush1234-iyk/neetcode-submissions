class Solution {
public:

    /*
        we have to return maximum count ka elemnt array 

    */

    int majorityElement(vector<int>& nums) {

        map<int , int> frq  ; 
        int n = nums.size() ; 
        int maxi = INT_MIN; 
        

        for(int i =0 ; i<n ; i++ ){
            frq[nums[i]]++ ;
        }

        int ans ; 

       for(auto it  : frq){
       if(it.second > maxi){
        maxi = it.second; 
        ans = it.first ; 
       }

       }
        
        return ans ; 
        
    }
};