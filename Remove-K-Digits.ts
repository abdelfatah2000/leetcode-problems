function removeKdigits(num: string, k: number): string {
    let st: string[] = [];
    let res: string;
    for (let i = 0; i < num.length; i++) {
        while (st.length > 0 && st[st.length - 1] > num[i] && k > 0) {
            st.pop();
            k--;
        }
        st.push(num[i]);
    }
    while (k > 0) {
        st.pop();
        k--;
    }
    res = st.join('');
    while (res[0] === '0' && res.length > 0) {
        res = res.slice(1);
    }

    return res === '' ? "0" : res;
};