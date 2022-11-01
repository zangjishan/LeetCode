#include <iostream>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s2, t2;
        int a = 0;
        int b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#') s2[a++] = s[i];
            else if (a > 0) a--;
        }
        for (int i = 0; i < t.size(); i++) {
            if (s[i] != '#') t2[b++] = t[i];
            else if (b > 0) b--;
        }
        if (a == b) {
            b = 0;
            while (b < a) {
                if (s2[b] != t2[b]) return false;
            }
            return true;
        }
        return false;
    }
};

int main() {
    string s = "ab#c";
    string t = "ad#c";
    Solution so;
    if (so.backspaceCompare(s, t)) cout << true << endl;

    return 0;
}