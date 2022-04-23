class Solution {
    unordered_map<string, string> codeCol, urlCol;
    string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
     
    string getTiny(){
        string res="http://tinyurl.com/";
        for (int i=0; i<6; i++) 
            res += chars[rand() % 62];
    
        return res;
    }    
    
public:

    string encode(string longUrl) {
        if (urlCol.find(longUrl) != urlCol.end()) 
            return urlCol[longUrl];
        
        string code = getTiny();
        
        while (codeCol.find(code) != codeCol.end()) 
            code = getTiny();
        
        codeCol[code] = longUrl;
        urlCol[longUrl] = code;
        
        return code;
    }

    string decode(string shortUrl) {
        return codeCol[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));