class Solution {
public:

    void createmapping(string &str){
        char start = 'a';
        char mapping[300] = {0};

        for(char ch:str){
            if(mapping[ch] == 0){
                mapping[ch] = start;
                ++start;
            }
        }

        //update the string
        for(int i=0; i<str.length(); ++i){
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        //pattern normalization
        createmapping(pattern);

        vector<string> ans;
        for(string s:words){
            string temp = s;
            createmapping(temp);
            if(temp == pattern){
                ans.push_back(s);
            }
        }
        return ans;
    }
};
