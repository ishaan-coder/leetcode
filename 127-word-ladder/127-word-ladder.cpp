class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
      if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())
          return 0;
        
        set<string>st;
        for(auto i:wordList)
            st.insert(i);
        queue<string>q;
        q.push(beginWord);
        int d=0;
        while(!q.empty())
        {
            d++;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                string curr=q.front();
                q.pop();
                for(int j=0;j<curr.size();j++)
                {
                string temp=curr;
                for(char c='a';c<='z';c++)
                {
                    temp[j]=c;
                    if(temp==endWord)
                        return d+1;
                    if(curr==temp)
                        continue;
                    if(st.find(temp)!=st.end())
                    {
                        q.push(temp);
                        st.erase(temp);
                    }
                    
                }
            }
        }
        }
        return 0;
        
    }
   
};