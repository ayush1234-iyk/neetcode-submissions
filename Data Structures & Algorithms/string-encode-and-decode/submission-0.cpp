class Solution {
public:

    string encode(vector<string>& strs) {

        string ans ="" ; 

        for(string s : strs){
            ans += to_string(s.size()) +"#" + s ; 
        }

        return ans  ; 

    }

    vector<string> decode(string s) {

            vector<string> ans ; 
            int i =0 ; 
                // vector<string> ans ; 

            while(i < s.size()){

                string len = ""; 
            

                while(s[i] !=  '#'){
                    len += s[i] ;
                    i++; 
                }

            int n = stoi(len) ;
            i++; 

            string res = s.substr(i , n) ; 
            ans.push_back(res) ; 

            i+=n ; 

            }
return ans ; 
    }
};
