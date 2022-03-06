class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
            return stones[0];
        
        priority_queue<int> q;
        
        for(auto i: stones)
            q.push(i);
        
        int res=0;
        
        while(q.size()>0){
            int s1=q.top();
            q.pop();
            
            int s2=q.top();
            q.pop();
            
            if(s1-s2>0)
                q.push(s1-s2);
            
            if(q.size()==1)
                return q.top();
        }
        
        return 0;
    }
};