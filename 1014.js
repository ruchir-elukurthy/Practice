var maxScoreSightseeingPair = function(values) {
    let length = values.length;
    let max_score = Number.MIN_SAFE_INTEGER;
    let prev_max = 0;
    for(let i = 0; i < length; ++i) {
        max_score = Math.max(values[i] - i + prev_max, max_score);
        prev_max = Math.max(values[i] + i, prev_max);
    }
    return max_score;
};
