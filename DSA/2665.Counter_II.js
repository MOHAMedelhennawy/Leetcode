/**
* @param {integer} init
* @return { increment: Function, decrement: Function, reset: Function }
*/
var createCounter = function(init) {
    let newInit = init;
    return {
        increment: () => ++newInit,
        decrement: () => --newInit,
        reset: () => newInit = init,
    }
};


    /**
    * const counter = createCounter(5)
    * counter.increment(); // 6
    * counter.reset(); // 5
    * counter.decrement(); // 4
    */