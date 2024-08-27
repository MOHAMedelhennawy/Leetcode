/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    count = 0;
    return function(...args){
        return count++ === 0 ? fn(...args) : undefined;
    }
};
