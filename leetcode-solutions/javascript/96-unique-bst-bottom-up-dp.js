/**
 * @param {number} n
 * @return {number}
 */
var numTrees = function (n) {
  const dp = new Array(n + 1);

  dp[0] = dp[1] = 1;
  dp[2] = 2;

  for (let i = 3; i <= n; i++) {
    let res = 0;
    for (let k = 0; k < i; k++) {
      let leftCount = k;
      let rightCount = i - k - 1;
      res += dp[leftCount] * dp[rightCount];
    }
    dp[i] = res;
  }

  return dp[n];
};
