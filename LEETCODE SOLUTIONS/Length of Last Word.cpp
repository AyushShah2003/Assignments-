class Solution {
 public:
  int lengthOfLastWord(string s) {
    int i = s.length() - 1;
    //@ayushshah

    while (i >= 0 && s[i] == ' ')
      --i;
    const int lastIndex = i;
    while (i >= 0 && s[i] != ' ')
      --i;

    return lastIndex - i;
  }
};
