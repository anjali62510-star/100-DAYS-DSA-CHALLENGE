class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        // If concatenations are different, no common divisor exists
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        // Find GCD of the lengths
        int len = gcd(str1.length(), str2.length());

        return str1.substr(0, len);
    }
};