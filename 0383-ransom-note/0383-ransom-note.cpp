class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> rans(26);
        vector<int> mag(26);
        for (int i=0; i<ransomNote.size(); i++){rans[ransomNote[i]- 97]++;}
        for (int i=0; i<magazine.size(); i++){mag[magazine[i]- 97]++;}

        for(int j=0; j<26; j++){
            if(rans[j]> mag[j]){return false;}
        }
        return true;
        
    }
};