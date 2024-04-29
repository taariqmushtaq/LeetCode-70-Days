class Solution {
public:
    int reverse(int x) {
        // Constants for 32-bit signed integer range
        const int MAX_VALUE = 2147483647; // 2^31 - 1
        const int MIN_VALUE = -2147483648; // -2^31
        
        // Initialize variables
        int reversed_x = 0;
        
        // Reverse the digits
        while (x != 0) {
            // Check for overflow before appending the next digit
            if (reversed_x > MAX_VALUE / 10 || reversed_x < MIN_VALUE / 10)
                return 0;
            
            // Append the next digit
            reversed_x = reversed_x * 10 + x % 10;
            x /= 10;
        }
        
        return reversed_x;
    }
};
