class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) // Check if the input vector is empty
            return "";

        int minLen = INT_MAX; // Initialize the minimum length to maximum integer value

        // Find the minimum length among all strings
        for (const string& s : strs) {
            minLen = min(minLen, static_cast<int>(s.length()));
        }

        // Iterate through each character position up to the minimum length
        for (int i = 0; i < minLen; ++i) {
            // Compare the character at position i in the first string with
            // characters at the same position in other strings
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != strs[0][i]) {
                    // If a mismatch is found, return the prefix up to the mismatch
                    return strs[0].substr(0, i);
                }
            }
        }

        // If all characters up to the minimum length match, return the entire prefix
        return strs[0].substr(0, minLen);
    }
};