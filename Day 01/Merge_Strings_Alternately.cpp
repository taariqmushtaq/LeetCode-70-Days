class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0; // Initialize i here
        string result = "";

        while (i < word1.size() && j < word2.size()) {
            result += word1[i++];
            result += word2[j++];
        }
        // agr aik word ka size chota bh ha to, upr wali condition mai nahi ayy ga, to isliye check k liyy aik or loop lga lia word1 k liyy.
        while (i < word1.size()) {
            result += word1[i++];
        }

        // same agr dusray word ka size chota bh ha to, upr waly phly loop ki condition mai nahi ayy ga, to isliye check k liyy aik or loop lga lia word2 k liyy.
        while (j < word2.size()) { // Corrected loop condition
            result += word2[j++];
        }
        return result;
    }
};
