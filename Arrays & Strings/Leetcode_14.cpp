class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        string result;

        for(int i=0; i<first.length(); ++i){
            if(first[i] != last[i]){
                break;
            }
            result.push_back(first[i]);
        }
        return result;
    }
};
