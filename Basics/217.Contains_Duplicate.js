// Solution: #1
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let uniqeNumbers = new Set();

    for (const n of nums) {
        if (uniqeNumbers.has(n))
            return true;
        uniqeNumbers.add(n);

    }

    return false;
};


// Solution: #2
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let uniqeNumbers = new Set(nums);

    if (nums.length === uniqeNumbers.size) 
        return false;

    else
        return true;

};