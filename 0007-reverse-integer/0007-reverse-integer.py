class Solution(object):
    def reverse(self, x):
        if x < 0:
            y = (-1)*x
            p = 0
            while(y!=0):
                rem = y%10
                y = y/10
                p = p*10+rem
                
            p = (-1)*p
            
            if p < (-1)*(2**31):
                return 0
            else:
                return p
            
        else:
            p = 0
            while(x!=0):
                rem = x%10
                x = x/10
                p = p*10+rem
            
            if p > 2**31 -1:
                return 0
            else:
                return p            
            
        