#include <iostream>
using namespace std;


class Solution 
{
public:
    uint32_t reverseBits(uint32_t n) 
    {

        // result to be returned
        uint32_t result = 0;

        // iterate through n
        // less than 32 because each argument will be 32 bits
        for (int i = 0; i < 32; i++)
        {
            // left shift result
            result <<= 1;

            // if the bit is 1, add 1
            if (n & 1)
            {
                // all bits 0 by default
                // adds 1
                result++;
            }

            // right shift
            n >>= 1;
        }
        return result;
    }
};

int main()
{
    Solution solution;
    uint32_t example_one = 43261596;
    cout << "Example One : " << solution.reverseBits(example_one) << endl;
	return 0;
}
