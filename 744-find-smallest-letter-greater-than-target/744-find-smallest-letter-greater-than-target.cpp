class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int i;
        char x;
        for(i=0;i<n;i++)
        {
            if(letters[i]>target)
                return letters[i];
        }
        return letters[0];
    }
};