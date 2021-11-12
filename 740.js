var deleteAndEarn = function(nums) {
    let length = nums.length;
    if(length === 1)
        return nums[0];
    let max_value = Math.max(...nums);
    let count_occurance = new Array(max_value+1).fill(0);
    for(let i = 0; i < length; ++i) {
        ++count_occurance[nums[i]];
    }
    for(let i = 2; i <= max_value; ++i) {
        count_occurance[i] = Math.max(count_occurance[i-2] + count_occurance[i] * i, count_occurance[i-1]);
    }
    return count_occurance[max_value];
    
    
};
