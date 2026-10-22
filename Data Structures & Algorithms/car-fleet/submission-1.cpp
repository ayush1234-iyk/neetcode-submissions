class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector<pair<double ,  double>> ans ; 
        int n = position.size() ; 

        for(int i =0 ; i<n ; i++){
            ans.push_back({position[i] ,  speed[i]}) ; 
        }

        sort(ans.rbegin() ,  ans.rend()) ; 

        // jiska time jada uska fleet bdega  
        int fleet = 0; 
        double prv = 0.0; 

        for(int i = 0; i<n ; i++){
            double  time  = double(target - ans[i].first) / ans[i].second ; 

            if(time  > prv){
                fleet++ ; 
                prv = time  ; 
            }

        }




return fleet ; 
    }
};
