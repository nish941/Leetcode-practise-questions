class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        while(word1!= "" and word2!= ""){
            ans+= word1[0];
            word1.erase(word1.begin());
            ans+= word2[0];
            word2.erase(word2.begin());
        }
        ans+= word1;
        ans+= word2;
        return ans;
    }
};