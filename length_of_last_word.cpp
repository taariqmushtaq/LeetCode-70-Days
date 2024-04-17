#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0;
        for(int i = 0; i < s.size(); i++)
            {
            if(s[i] != ' ')
            {
                size++;
            }
            else if(i < s.size() - 1 && s[i + 1] != ' ')
            {
                size=0;
            }
        }
        return size;
    }
};