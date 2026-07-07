class Solution {
public:
        bool f(int i,string &cleaned) {
        if(i>=cleaned.size()/2) return true;
        if(cleaned[i]!=cleaned[cleaned.size()-i-1]) return false;
        return f(i+1,cleaned);
    } 
    bool isPalindrome(string s) {
        string cleaned="";
        for(int i=0;i<s.size();i++){
                if(isalnum(s[i])){
                    cleaned += tolower(s[i]);
                } }
        return f(0,cleaned);
    }
};