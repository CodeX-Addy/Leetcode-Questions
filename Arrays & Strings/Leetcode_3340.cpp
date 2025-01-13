class Solution {
public:
    bool isBalanced(string num) {
        int oddSum = 0;
        int evenSum = 0;
        for(size_t i=0; i<num.length(); ++i){
            int digit = num[i] - '0';
            if(i & 1)
                oddSum += digit;
            else
                evenSum += digit;
        }
        return oddSum == evenSum;
    }
};
