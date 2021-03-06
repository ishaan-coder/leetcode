class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end(),greater<int>());
            if(stones[0] == stones[1])
                stones.erase(stones.begin(),stones.begin()+2);
            else{
                stones.push_back(abs(stones[0] - stones[1]));
                stones.erase(stones.begin(),stones.begin()+2);         
            }
        }
        if(stones.size()==0)
            return 0;
        else
            return stones[stones.size()-1] ;
    }
};