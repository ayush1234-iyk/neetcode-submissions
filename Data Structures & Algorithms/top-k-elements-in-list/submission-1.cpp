class Solution {
public:

/*
  
  on the basis of  k we have to return k most frequent elemnts in  an array 

  APROACH ;-
  1. cnt rkho har elemnt ka 
  2. jitna k h wo sare elmnts ko jo max cnt h 


*/

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size() ; 
        map<int, int> mp ; 

        for(int i =0; i<n ; i++){
            mp[nums[i]]++;  
        }

        vector<pair<int , int>> ans ; 

        for(auto it : mp){
            ans.push_back({it.first , it.second}) ; 
        }

     sort(ans.begin(), ans.end(), [](auto a, auto b){
    return a.second > b.second;
});

        vector<int> res ; 

        for(int i =0 ; i<k; i++){
            res.push_back(ans[i].first) ; 
        }

return res ;  

    }
};
