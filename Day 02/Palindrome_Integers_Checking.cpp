class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        if (x == 0)
            return true;
        if (x <= 9)
            return true;


        string ptr = to_string(x);
        bool flag = true;
        int size = ptr.size();
        char array[size];
        char array2[size];
        int d=0;

        for (int i = 0; i < size; i++) {
            array[i] = ptr[i];
        }

        for (int j = size-1; j >= 0; j--) {
            array2[d] = array[j];
            d++;
        }

        for (int s = 0; s < size; s++) {
            if (array[s] == array2[s]) 
            {
            } 
            else 
            {
                flag = false;
            }
        }

        return flag;
    }
};
