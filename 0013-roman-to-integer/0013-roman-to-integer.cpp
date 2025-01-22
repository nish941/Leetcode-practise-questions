#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = { {'I', 1}, {'V', 5}, {'X', 10},  {'L',  50}, {'C', 100}, {'D', 500}, {'M', 1000} };

        int total = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (i + 1 < s.size() && roman[s[i]] < roman[s[i + 1]]) {
                total -= roman[s[i]];
            } else {
                total += roman[s[i]];
            }
        }
        return total;
    }
};