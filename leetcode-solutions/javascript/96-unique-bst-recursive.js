/**
 * @param {number} n
 * @return {number}
 */
var numTrees = function (n) {
  if (n === 0 || n === 1) {
    return 1;
  }

  if (n === 2) {
    return 2;
  }

  let res = 0;
  for (let i = 0; i < n; i++) {
    let leftCount = i;
    let rightCount = n - i - 1;
    res += numTrees(leftCount) * numTrees(rightCount);
  }
  return res;
};
