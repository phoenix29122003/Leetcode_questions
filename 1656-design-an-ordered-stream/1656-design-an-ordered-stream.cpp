class OrderedStream {
public:
    map<int,string>mp;
    int ptr,maxsize;
    OrderedStream(int n) {
        maxsize=n;
        ptr=1;
        for(int i=1;i<=n;i++) mp[i]="nonsense";
    }
    
    vector<string> insert(int id, string value) {
        mp[id]=value;
        vector<string>ans;
        for(int i=ptr;i<=maxsize;i++)
        {
            if(mp[i]!="nonsense") ans.push_back(mp[i]);
            else 
            {
                ptr=i;
                break;
            }
        }
        return ans;
    }
};


// Tonari no Seki-kun