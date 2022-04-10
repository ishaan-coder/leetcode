class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        int i;
        vector<string>temp;
        int sum=0;
        for(i=0;i<n;i++)
        {
            if(ops[i]=="+")
            {
                string x1=temp[temp.size()-1];
                string x2=temp[temp.size()-2];
                sum=stoi(x1)+stoi(x2);
                string y=to_string(sum);
                temp.push_back(y);
                sum=0;
            }
            else if(ops[i]=="D")
            {
                string x1=temp[temp.size()-1];
                sum=stoi(x1)*2;
                string y=to_string(sum);
                temp.push_back(y);
                sum=0;
            }
            else if(ops[i]=="C")
            {
                temp.pop_back();
            }
            else
            {
                temp.push_back(ops[i]);
            }
        }
        int ans=0;
        for(i=0;i<temp.size();i++)
        {
            int y=stoi(temp[i]);
            ans+=y;
        }
        return ans;
    }
};