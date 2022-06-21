class Solution {
public:
    string greatestLetter(string s) {
        string ans="";
        sort(s.begin(), s.end());
        unordered_set<char> st;
        for(auto it: s){
            st.insert(it);
        }
        for(auto it: s){
            if(it>= 'A' && it<= 'Z'){
                if(st.find(it+'a'-'A')!= st.end()){
                    ans= it;
                }
            }
        }
        return ans;
    }
};
