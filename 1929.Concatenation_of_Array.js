/**
 * @param {number[]} nums
 * @return {number[]}
 */

// Solution: #1

var getConcatenation = function(nums) {
    return nums.concat(nums);
};


// Solution: #2
var getConcatenation = function(nums) {
    
    let newArray = new Array(nums.length * 2);

    for (let i = 0; i < nums.length; i++) {
        newArray[i] = newArray[i + nums.length] = nums[i];
    }

    return newArray;
};