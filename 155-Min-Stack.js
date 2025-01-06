
var MinStack = function () {
    this.minSt = [];
    this.st = [];
};

/** 
 * @param {number} val
 * @return {void}
 */
MinStack.prototype.push = function (val) {
    let n = this.minSt.length;
    if (n === 0 || this.minSt[n - 1] > val) {
        this.minSt.push(val);
    } else {
        this.minSt.push(this.minSt[n - 1]);
    }
    this.st.push(val);
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function () {
    this.st.pop();
    this.minSt.pop();
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
    return this.st[this.st.length - 1];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function () {
    return this.minSt[this.minSt.length - 1];
};

/** 
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(val)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */