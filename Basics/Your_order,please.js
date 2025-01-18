function order(text) {
    let map = {};
    let newWords = text.split(' ');
    let res = [];

    for (let i = 0; i < newWords.length; i++) {
        for (let j = 0; j < newWords[i].length; j++) {
            if (newWords[i][j] > 0 && newWords[i][j] < 10) {
                let char = newWords[i][j];
                map[char] = i;
            }   
        }
    }

    for (let i in map) {
        res.push(newWords[map[i]]);
    }

    return res.join(' ');
}

console.log(order("is2 Thi1s T4est 3a S6ix"))