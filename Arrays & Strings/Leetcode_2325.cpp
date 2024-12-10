class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a';
        char mapping[280] = {0};

        for(auto ch: key){
            if(ch != ' ' && mapping[ch] == 0){
                mapping[ch] = start;
                ++start;
            }
        }

        string ans;
        for(char ch: message){
            if(ch == ' ')
                ans.push_back(ch);
            else{
                char decode = mapping[ch];
                ans.push_back(decode);
            }
        }
        return ans;
    }
};
