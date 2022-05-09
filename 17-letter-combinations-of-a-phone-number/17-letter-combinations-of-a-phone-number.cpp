class Solution {
    vector<string> col = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, res; 
public:
    vector<string> letterCombinations(string digits) {
        if(digits == "") 
            return res;        
        
        reccur(digits, 0, "");              
        
        return res;
    }
    
    void reccur(string &digits, int idx, string curr){
        
        if(idx == size(digits))   
            res.push_back(move(curr));
        
        else
            for(auto c: col[digits[idx] - '2'])
                reccur(digits, idx+1, curr+c);
    }    
};

   


