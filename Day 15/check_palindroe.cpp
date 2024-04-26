class Solution {
public:
    bool isPalindrome(std::string s) {
    // Convert to lowercase and remove non-alphanumeric characters
    std::string cleaned;
    for (char c : s) {
        if (std::isalnum(c)) {
            cleaned.push_back(std::tolower(c));
        }
    }
    
    // Check if the string is equal to its reverse
    for (int i = 0, j = cleaned.size() - 1; i < j; ++i, --j) {
        if (cleaned[i] != cleaned[j]) {
            return false;
        }
    }
    return true;
}
};