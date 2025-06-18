class CustomStack {
    vector<int> stack ;
    unordered_map<int,int> map ;
    int maxsize ;

public:
    CustomStack(int maxSize) {
        this-> maxsize = maxSize;  
    }
    
    void push(int x) {
        if (stack.size() < maxsize)
        {
            //elemnt aa sakta hai 
            stack.push_back(x);
        }
        
    }
    
    int pop() {
        if (stack.empty()) return -1 ;
        int i = stack.size()-1 ;
        int increment = 0 ;
        if (map.count(i))
        {
            increment = map[i];
            if ( i > 0 )
            {
                map[i-1] += increment;
            }
            map.erase(i);
        }
        int result = stack.back()+increment;
        stack.pop_back();
        return result ;
        
    }
    
    void increment(int k, int val) {
        int i = min(k, (int)stack.size() );
        // if (i >=0 )
        // {
        //     map[i] += val ;
        // }
        map[i-1]+=val;

        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */