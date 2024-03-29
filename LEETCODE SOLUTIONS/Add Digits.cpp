class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        if(num % 9 == 0) return 9;
        return num % 9;
    }
};

//combine the last two cases
class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        return (num-1)%9+1;
    }
};
