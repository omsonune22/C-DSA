#include <string>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        int a[256] = {0};
        int b[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            if (a[(unsigned char)s[i]] != b[(unsigned char)t[i]])
                return false;

            a[(unsigned char)s[i]] = i + 1;
            b[(unsigned char)t[i]] = i + 1;
        }

        return true;
    }
};