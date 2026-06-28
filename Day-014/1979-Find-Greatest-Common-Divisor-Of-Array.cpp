#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
    int findGCD(std::vector<int>& nums) {

        int smallest = *std::min_element(nums.begin(), nums.end());
        int largest = *std::max_element(nums.begin(), nums.end());

        return gcd(smallest, largest);
    }

private:
    int gcd(int a, int b) {
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }
};