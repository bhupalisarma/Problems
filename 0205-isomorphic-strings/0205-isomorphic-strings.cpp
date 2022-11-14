class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // m1 is used to map s[i] to t[i]
        // m2 is used to map t[i] to s[i]
        // example 1:
        // m1['e'] --> 'a'
        // m1['g'] --> 'd'
        // m2['a'] --> 'e'
        // m2['d'] --> 'g'
        unordered_map<char, char> m1, m2;
        for (int i = 0; i < s.size(); i++) {
            // if s[i] isn't in m1 and t[i] isn't in m2
            if (!m1.count(s[i]) && !m2.count(t[i])) {
                // then we can map s[i] to t[i]
                m1[s[i]] = t[i];
                // and t[i] to s[i]
                m2[t[i]] = s[i];
            } else {
                // if they are they are isomorphic,
                // m1[s[i]] should map to t[i], and m2[t[i]] should map to s[i]
                // we return false here if this condition is not satisfied
                if (m1[s[i]] != t[i] || m2[t[i]] != s[i]) {
                    return false;
                }
            }
        }
        // they are isomorphic
        return true;
    }
};