// Solution: #1 Using loop
var compose = function(functions) {
        
    return function(x) {
        for (let i = functions.length - 1; i >= 0; i--) {
            let func = functions[i];
            x = func(x);
        }
        return x;
    }
};

// Solution: #2 Using map
var compose = function(functions) {
    
    return function(x) {
        functions.reverse().map(func => {
            x = func(x);
        })
        return x;
    }
};

// Solution: #3 Using reduce
var compose = function(functions) {
    return function(x) {
        return functions.reverse().reduce((acc, func) => func(acc), x);
    };
};


const fn = compose([x => 10 * x, x => 10 * x, x => 10 * x])
console.log(fn(1))
