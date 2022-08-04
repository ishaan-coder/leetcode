class MedianFinder {
public:
    priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxh.empty()||maxh.top()>num)
            maxh.push(num);
        else
            minh.push(num);
        
        if(maxh.size()>(minh.size()+1))
        {
            int temp=maxh.top();
            maxh.pop();
            minh.push(temp);
        }
        else if(minh.size()>maxh.size()+1)
        {
            int temp=minh.top();
            minh.pop();
            maxh.push(temp);
        }
    }
    
    double findMedian() {
        if(maxh.size()==minh.size())
        {
            return (maxh.top()+minh.top())/2.0;
        }
        else
        {
            if(maxh.size()>minh.size())
            {
                return maxh.top();
            }
            else
                return minh.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */