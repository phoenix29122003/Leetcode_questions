class MedianFinder {
public:
    MedianFinder() {}
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    void addNum(int num) {
        maxheap.push(num);
        minheap.push(maxheap.top());
        maxheap.pop();
        if(minheap.size()>maxheap.size())
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        if(maxheap.size()>minheap.size()) return (double)maxheap.top();
        else return (maxheap.top()+minheap.top())/2.0;
    }
};