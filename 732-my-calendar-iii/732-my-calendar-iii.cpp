class MyCalendarThree {
private:
    map<int,int> mp;
public:
    MyCalendarThree() {
        mp.clear();
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        
        int maxCount = 0, currCount = 0;
        
        for(auto it : mp) {
            currCount += it.second;
            maxCount = max(maxCount, currCount);
        }
        return maxCount;
    }
};
/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */