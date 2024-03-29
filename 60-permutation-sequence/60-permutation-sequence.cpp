class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int>numbers;
        for(int i=1;i<n;i++)
        {
            fact=fact*i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        k=k-1;
        string s="";
        while(true)
        {
            s=s+to_string(numbers[k/fact]);
            numbers.erase(numbers.begin()+k/fact);
            k=k%fact;
            if(numbers.size()==0)
                break;
            fact=fact/numbers.size();
        }
        return s;
    }
};