class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int xasitis = x;
        while(x){
            int digit = x % 10;
            sum += digit;
            x = x/10;
        }
        if(xasitis % sum == 0)
            return sum;
        return -1;
    }
};
