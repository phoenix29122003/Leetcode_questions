class BrowserHistory {
public:
    stack<string> history;
    stack<string> future;
    BrowserHistory(string homepage) {
        history.push(homepage);
        future = stack<string>();          
    }
    void visit(string url) {
        history.push(url);
        future=stack<string>();        
    }
    string back(int steps) {
        while(steps-- >0 && history.size()>1){ 
            future.push(history.top());
            history.pop();
        }
        return history.top();
    }
    string forward(int steps) {
        while(steps-- >0 && future.size()>0){
            history.push(future.top());
            future.pop();
        }
        return history.top();
    }
};