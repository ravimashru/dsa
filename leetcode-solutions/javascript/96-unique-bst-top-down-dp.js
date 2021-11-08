/**
 * @param {number} n
 * @return {number}
 */
var numTrees = function (n) {
  return dp(n);
};

var dp = function (n, memo = {}) {
  if (n in memo) {
    return memo[n];
  }

  if (n === 0 || n === 1) {
    return (memo[n] = 1);
  }

  let res = 0;
  for (let k = 0; k < n; k++) {
    let leftCount = k;
    let rightCount = n - k - 1;
    res += dp(leftCount, memo) * dp(rightCount, memo);
  }
  return (memo[n] = res);
};
