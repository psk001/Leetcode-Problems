/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let p= init;
    
    function increment(){
        p+=1;
        return p;
    }
    
    function decrement(){
        p-=1;
        return p;
    }
    
    function reset(){
        p=init;
        return p;
    }
    
    return {
        increment,
        decrement,
        reset
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */