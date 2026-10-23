class Solution {
public:

    // ecoding aise krna h  ki   2[a3[b]]c
    //                          2[abbb]c 
    //         this is final    abbbabbbc
    // jitna bar number dikhe bracket ke phle utne bar uss char ko  repeate kr do 
    // jitne number h  bracket ke phle sbko bari bari se nikalo and then 
    // iterate kro and then  last closing bracket tak us char ko reptea kro 


    string decodeString(string s) {
        
        int n =  s.size() ; 
        string res = "" ; 
        int k =0 ; 
        stack<string> ans ; 
        stack<int>  nums ; 

        for(int i = 0 ; i<n ; i++){

            char ch = s[i] ; 

            if(isdigit(ch)) {
             k = k* 10 + (ch  - '0'); 
            }

           else if(ch == '['){
               nums.push(k) ; 
               ans.push(res) ; 

               k =0 ; 
               res = "" ; 

            }
            else if(ch == ']'){

                int count = nums.top() ; 
                nums.pop() ; 

                string temp = ans.top() ; 
                ans.pop() ; 

                while(count--){

                        temp += res ; 
                }
        res = temp ; // res me temp ka value stored rahe 
            }
            else{
                res += ch ; 
            }

        }
return res ; 
    }
};