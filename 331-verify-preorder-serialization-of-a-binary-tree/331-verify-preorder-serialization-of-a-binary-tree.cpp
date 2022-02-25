class Solution {
public:
    bool isValidSerialization(string preorder) {
        if(preorder.size()==0)
            return true;
        
        
        stringstream ss(preorder);   
        string curr;
        int numNode=1;
        
        while(getline(ss, curr, ',')){
            numNode--;
            
            if(numNode<0)
                return 0; 
            
            if(curr!="#")
                numNode+=2;
        }
        
        return numNode==0;
    }
};