class MedianFinder {
public:
    MedianFinder() {}
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    void addNum(int num) {
        maxheap.push(num);
        minheap.push(maxheap.top());
        maxheap.pop();
        if(minheap.size()>maxheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    double findMedian() {
        if(minheap.size()==maxheap.size()) return ((double)minheap.top()+(double)maxheap.top())/2;
        else return (double)maxheap.top();
    }
};