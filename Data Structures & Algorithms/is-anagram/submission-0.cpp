class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int> temp1(26),temp2(26);
        int i;
        for(i=0;i<s.size();i++){
            temp1[s[i]-'a']++;
        }
        for(i=0;i<t.size();i++){
            temp2[t[i]-'a']++;
        }
        for(i=0; i<26; i++){
            if(temp1[i]!=temp2[i])return false;
        }
        return true;
    }
};