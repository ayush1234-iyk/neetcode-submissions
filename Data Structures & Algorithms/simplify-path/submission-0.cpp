class Solution {
public:

/*

so this questions ays that we have to make a valid string like struture where following things must be there :- 

1. String must start with '/' and must not end with '/'
2. remove all the '.' if presenyt  

main thing is if the string contain ivalid charc is treated as valid directory 

APPROACH ;- 
1. string lo usme bari bari charc store krte raho we can take set<char> to store only the unique char  
2. for ex :-  neetcode/practice//...///../courses 
=> neetcode/practice/course 
 
*/ 

    string simplifyPath(string path) {
        
        stack<string> st  ; 
        stringstream ss(path) ; 
        string part ; 

        while(getline(ss ,  part , '/')){

            if(part.empty() || part == "."){
                continue  ; 
            }else if(part == ".."){
             if(!st.empty()){
                st.pop() ;  
            }
            }
            else{
                
                st.push(part) ; 
            }

        }

        vector<string> dir  ;

    while(!st.empty()){
        dir.push_back(st.top()) ; 
        st.pop() ; 
    }

    reverse(dir.begin() ,  dir.end()) ; 
        string res = "" ; 
        


        for(string x : dir){
            res += "/" + x ; 
        }

    if(!res.empty()){
        return res ; 
    }else{
        return "/" ; 
    }

    }
};