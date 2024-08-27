/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    
    let map = {};
    return function(...args) {
        return fn(...args)
    }
}


 
let callCount = 0;
const memoizedFn = memoize(function (a, b) {
    callCount += 1;
    return a + b;
})
console.log(memoizedFn(2, 3)) // 5
console.log(memoizedFn(2, 3)) // 5
console.log(callCount) // 1 
