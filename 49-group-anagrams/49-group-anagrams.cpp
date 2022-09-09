class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> strs) {
    std::vector <std::vector<std::string>> ans;
	std::unordered_map <std::string, int> unmap;
	std::string temp;
	for (int i = 0; i < strs.size(); i++) {
		temp = strs[i];
		std::sort(temp.begin(), temp.end());
		if (unmap[temp]) ans[unmap[temp] - 1].push_back(strs[i]);
		else {
			ans.push_back({ strs[i] });
			unmap[temp] = ans.size();
		    }
	    }
    return ans;
    }
};