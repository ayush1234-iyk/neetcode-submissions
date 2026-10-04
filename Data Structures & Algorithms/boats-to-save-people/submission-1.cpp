class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int n = people.size() ; 
        sort(people.begin() , people.end()) ; 

        int l = 0; 
        int r = n - 1; 
        int cnt = 0; 

        while(l <= r){

            int sum =  people[l] + people[r] ; 

            if(sum <= limit){ 
                l++; 
            }
            
                r--; 
            cnt++; 
            
        }
return cnt ; 

    }
};