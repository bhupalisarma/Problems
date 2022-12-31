
class SeatManager {
public:
    set<int> s;
    SeatManager(int n) {
        for(int i = 1; i <= n; i++) s.insert(end(s), i);  // hint to reduce TC to O(1)
    }
	
    int reserve() {
        int top = *begin(s);
        s.erase(begin(s));
        return top;
    }
	
    void unreserve(int seatNumber) {
        s.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */