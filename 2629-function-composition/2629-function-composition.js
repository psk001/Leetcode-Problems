/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
	return function(x) {
        if(functions.length==0)
            return x;
        
        let n= functions.length;
        let res= x;
        
        for(const func of functions.reverse()){
            
            res= func(res);
        }
        
        return res;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */