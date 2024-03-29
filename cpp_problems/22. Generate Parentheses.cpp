class Solution {
public:
    vector<string>result;
    void generate (int open,int close ,int n,string s){
       if (s.size()== 2*n ){
           result.push_back(s);
       }
       if (open<n){
           generate(open+1,close,n,s+"(");
       }
       if (close<open){
           generate(open,close+1,n,s+")");
       }
    }
    vector<string> generateParenthesis(int n) {
        generate(0,0,n,"");
        return result;
    }
};
