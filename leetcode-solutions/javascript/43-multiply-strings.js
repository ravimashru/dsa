/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var multiply = function (num1, num2) {
  const res = [];

  for (let i = 0; i < num1.length; i++) {
    const lineSum = [];
    for (let x = 0; x < i; x++) {
      lineSum.push(0);
    }

    let carry = 0;

    for (let j = 0; j < num2.length; j++) {
      let prod =
        parseInt(num1[num1.length - 1 - i]) *
          parseInt(num2[num2.length - 1 - j]) +
        carry;

      carry = Math.floor(prod / 10);
      prod = prod % 10;

      lineSum.push(prod);
    }

    if (carry != 0) {
      lineSum.push(carry);
    }

    res.push(lineSum);
  }

  let sumArray = res[0];
  for (let i = 1; i < res.length; i++) {
    let newSum = [];
    let curr = res[i];
    let carry = 0;
    for (let j = 0; j < curr.length; j++) {
      let num1 = j < sumArray.length ? sumArray[j] : 0;
      let num2 = j < curr.length ? curr[j] : 0;

      let sum = num1 + num2 + carry;
      carry = Math.floor(sum / 10);
      sum = sum % 10;

      newSum.push(sum);
    }

    if (carry !== 0) {
      newSum.push(carry);
    }

    sumArray = newSum;
  }

  let sum = "";
  for (let i = sumArray.length - 1; i >= 0; i--) {
    if (sum.length === 0 && sumArray[i] === 0) {
      continue;
    }
    sum += sumArray[i] + "";
  }
  if (sum === "") {
    sum = "0";
  }
  return sum;
};
