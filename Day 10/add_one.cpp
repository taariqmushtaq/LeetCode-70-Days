class Solution{
  public:
    std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();
    int carry = 1;
    for (int i = n - 1; i >= 0; --i) {
        digits[i] += carry;
        carry = digits[i] / 10;
        digits[i] %= 10;
        if (carry == 0)
            break;
    }
    if (carry)
        digits.insert(digits.begin(), carry);
    return digits;
}

    
    
    
};


