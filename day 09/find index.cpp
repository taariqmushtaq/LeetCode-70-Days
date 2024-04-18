class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystackLen = haystack.length();
        int needleLen = needle.length();
        
        // If the needle is empty, return 0
        if (needleLen == 0) return 0;
        
        // If needle is longer than haystack, return -1
        if (needleLen > haystackLen) return -1;
        
        // Iterate through the haystack string
        for (int i = 0; i <= haystackLen - needleLen; ++i) {
            // Check if the substring of haystack starting from index i matches needle
            if (haystack.substr(i, needleLen) == needle) {
                return i; // Return the index of the first occurrence of needle in haystack
            }
        }
        
        // If needle is not found in haystack, return -1
        return -1;
    }
};
