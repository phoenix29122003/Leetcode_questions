class BrowserHistory {
public:
    vector<string>history;
    int currIdx;
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        currIdx=0;
    }
    
    void visit(string url) {
        history.resize(currIdx+1);
        history.push_back(url);
        currIdx++;
    }
    
    string back(int steps) {
        currIdx=max(0,currIdx-steps);
        return history[currIdx];
    }
    
    string forward(int steps) {
        currIdx=min((int)history.size()-1,currIdx+steps);
        return history[currIdx];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */