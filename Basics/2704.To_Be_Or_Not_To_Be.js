/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe: (ex) => {
            if (val !== ex) {
                throw new Error('Not Equal');
            } else {
                return true;
            }
        },
        notToBe: (ex)  => {
            if (val === ex) {
                return true;
            } else {
                throw new Error('Equal');
            }
        }
    }
};

console.log(expect(5).toBe(null)); // undefined
console.log(expect(5).notToBe(null)); // true
