/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int n=employees.size();
        int i,j;
        int importance=0;
        queue<int>q;
        unordered_map<int,int>mp;
        vector<bool>x(n,false);
        for(i=0;i<n;i++)
        {
            mp[employees[i]->id]=i;
        }
        q.push(id);
        while(!q.empty())
        {
            int temp=q.size();
            int front=q.front();
            q.pop();
             
            if(x[mp[front]] == false)
            {
                
                importance += employees[mp[front]]->importance;
                x[mp[front]] = true;
                 if(employees[mp[front]]->subordinates>vector<int>())
                 {
                for(int z:employees[mp[front]]->subordinates)
                {
                    q.push(z);
                    cout<<z;
                }
                }
                else
                    continue;
            }
        }
        return importance;
    }
};