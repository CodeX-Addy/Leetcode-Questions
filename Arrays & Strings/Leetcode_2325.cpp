class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a';
        char mapping[300] = {0};

        //creating mapping array
        for(auto ch: key){
            if(ch != ' ' && mapping[ch] == 0){
                mapping[ch] = start;
                ++start;
            }
        }

        //decoding the message
        string ans;
        for(auto ch: message){
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
