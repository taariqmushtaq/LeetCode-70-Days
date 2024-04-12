#include <iostream>
#include <string>
using namespace std;

int romanToInt(std::string s)
{
    size_t size = s.size();
    char array[size];
    long long array2[size];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        array[i] = s[i];
    }


    // Correcting the conversion of Roman numerals to integers
    for (int j = 0; j < size; j++)
    {
        if (array[j] == 'I')
        {
            array2[j] = 1;
        }
        else if (array[j] == 'V')
        {
            array2[j] = 5;
        }
        else if (array[j] == 'X')
        {
            array2[j] = 10;
        }
        else if (array[j] == 'L')
        {
            array2[j] = 50;
        }
        else if (array[j] == 'C')
        {
            array2[j] = 100;
        }
        else if (array[j] == 'D')
        {
            array2[j] = 500;
        }
        else if (array[j] == 'M')
        {
            array2[j] = 1000;
        }
    }

    int result = array2[size - 1];
    for (int j = size - 2; j >= 0; j--)
    {
        if(array2[j]<array2[j+1])
        {
            result= result - array2[j];
        }
        else
        {
            result = result+array2[j];
        }
    }
    return result;
}

int main()
{
    
    string input = "MCMXCIV";
    int result = romanToInt(input);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
