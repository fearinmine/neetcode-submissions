class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.length() != t.length() ) {return false;}
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for ( char x : s){
            countS[x]++;
        }
        for ( char y : t ){
            countT[y]++;
        }
        return countT == countS;           
    }
};
