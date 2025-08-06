class RandomizedSet {
public:
    vector<int> nums;  // To store values
    unordered_map<int, int> mp;  // Map value to its index in nums


    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (mp.find(val) != mp.end()) return false; // Already present
        nums.push_back(val);
        mp[val] = nums.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (mp.find(val) == mp.end()) return false; // Not found
        int idx = mp[val];
        int last = nums.back();
        nums[idx] = last;
        mp[last] = idx;
        nums.pop_back();
        mp.erase(val);
        return true;
    }

    int getRandom() {
        return nums[rand() % nums.size()];
    }

    bool search(int val) {  // New function
        return mp.find(val) != mp.end();
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */