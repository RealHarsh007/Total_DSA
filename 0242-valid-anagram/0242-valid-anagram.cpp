class Solution {
public:
    bool isAnagram(string s, string t) {
        
      unordered_map<char,int>ma;
      unordered_map<char,int>mb;

      for(int x:s)ma[x]++;
      for(int x:t)mb[x]++;
      
      return ma==mb;
    }
};