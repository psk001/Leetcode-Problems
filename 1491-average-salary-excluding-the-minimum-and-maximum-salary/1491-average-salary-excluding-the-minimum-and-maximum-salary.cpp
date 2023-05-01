class Solution {
public:
    double average(vector<int>& salary) {
        int n= salary.size();
        
        double t=0, mn=salary[0], mx=salary[0];
        
        for(int i=0; i<n; i++){
            t+= salary[i];
            
            if(salary[i]<mn)
                mn= salary[i];
            
            if(salary[i]>mx)
                mx=salary[i];
        }
        
        cout << mn << " " << mx <<  " " << t << endl;
        t-= mn+mx;
        
        return (double) t/(n-2);
    }
};