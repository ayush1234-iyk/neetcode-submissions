class Solution {
public:

/*

    sorting aise krna h ki red then white then vlue ho

*/

    void sortColors(vector<int>& nums) {

        sort(nums.begin() , nums.end()) ; 

        for(auto  x : nums){
            cout<<x; 
        }
        
    }
};