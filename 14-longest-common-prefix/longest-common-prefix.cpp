class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix = "";

        int minlen = strs[0].size();

        for(int i=1; i<strs.size(); i++){
            if(strs[i].size() < minlen){
                minlen = strs[i].size();
            }
        }

        for(int i=0; i<minlen; i++){
            char c = strs[0][i];
            for(int j=1; j < strs.size(); j++){
                if(strs[j][i] != c){
                    return prefix;
                }
            }
            prefix += c;
        }
        return prefix;
    }
};