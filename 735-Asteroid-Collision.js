/**
 * @param {number[]} asteroids
 * @return {number[]}
 */
var asteroidCollision = function (asteroids) {
    let st = [];
    let num;
    for (let i = 0; i < asteroids.length; i++) {
        num = asteroids[i];
        if (num > 0) {
            st.push(num);
        } else {
            while (
                st.length > 0 &&
                st[st.length - 1] < Math.abs(num) &&
                st[st.length - 1] > 0
            ) {
                st.pop();
            }
            if (st.length === 0 || st[st.length - 1] < 0) {
                st.push(num);
            } else if (st[st.length - 1] === Math.abs(num) && st.length > 0) {
                st.pop();
            }
        }
    }
    return st;
};