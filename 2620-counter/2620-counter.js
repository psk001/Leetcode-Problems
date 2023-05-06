/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let flag=-1;
    return function() {
        flag=flag+1;
        return flag+n;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */