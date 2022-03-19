class Solution {
public:
    string largestNumber(vector<int>&a) {
            vector<string> t;

    for(auto i: a)
        t.push_back(to_string(i));

    sort(t.begin(), t.end(), cs);
        if(t[0]=="0")
            return "0";
    string res="";

    for(auto i: t)
        res+=i;

    return res;
    }
    
    static bool cs(string s, string t){
    string a=s+t;
    string b=t+s;

    return(a>b);
    }
};