/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    if (n <= 1) return 0;
    var sum = 0;
    var prod = 1;
    while (n >=1) {
        let m = Math.trunc(n) % 10;
        n = Math.trunc(n) / 10;
        sum += m;
        prod *= m;
    }
    return prod - sum;
};