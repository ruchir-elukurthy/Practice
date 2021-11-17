var generate = function(numRows) {
    let result = [[1]];
    if(numRows == 1) {
        return result;
    }
    for(let i = 1; i < numRows; ++i) {
        result.push(new Array(i+1));
        result[i][0] = result[i][i] = 1;
        let start = 1, end = i;
        while(start < end) {
            result[i][start] = result[i-1][start-1] + result[i-1][start-0];
            ++start;
        }
    }
    return result;
};
