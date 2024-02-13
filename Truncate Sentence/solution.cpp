class Solution {
public:
    string truncateSentence(string s, int k) {
        string trunc;
        int cont = 0;
        for(size_t i = 0; i < s.size(); ++i){
            if(cont == k)    { break; }
            trunc+=s[i];
            if(s[i+1] == ' '){ cont ++; }
        }
        return trunc;
    }
};  