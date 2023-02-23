class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        for(int i = digits.size()-1; i>=0; --i) {
            if (i==digits.size()-1) {
                carry = (digits[i] + 1)/10;
                digits[i] = (digits[i] + 1)%10;
            }
            else {
                int c = (digits[i] + carry)/10;                
                digits[i] = (digits[i] + carry)%10;
                carry = c;
            }
        }
        if(carry != 0) {
            digits.insert(digits.begin(), carry);
        }
        //@ayushshah 
        return digits;
    }
};
