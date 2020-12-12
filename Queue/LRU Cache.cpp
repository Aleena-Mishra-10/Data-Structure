class LRUCache {
    int sz;
    
public:
    list <int> C;
    map <int, int> KV;
    // We need this data structure to make Cache lookups O(1)
    map <int, list <int> :: iterator> Pos;
    LRUCache(int capacity): sz(capacity) {}
    
    int get(int key) {
        if (Pos.find(key) != Pos.end()) {
                // entry in cache, update position in cache.
                C.erase(Pos[key]);
                C.push_back(key);
                auto i = C.end();
                Pos[key] = --i;
                return KV[key];
            }
            return -1;
    }
    
    void put(int key, int value) {
        if (Pos.find(key) != Pos.end()) {
            // CASE1: entry in cache, do not delete anything,
            // update Position of the page in cache, 
            // update value of the key.
            C.erase(Pos[key]);
            C.push_back(key);
            auto i = C.end();
            Pos[key] = --i;
            KV[key] = value;
        } else if (C.size() >= sz) {
            // CASE2: Evict an entry, add new key
            int x = C.front();
            C.erase(Pos[x]);
            KV.erase(x);
            Pos.erase(x);
            C.push_back(key);
            auto i = C.end();
            Pos[key] = --i;
            KV[key] = value;
        } else {
            // CASE3: No Eviction, only add new key.
            C.push_back(key);
            auto i = C.end();
            Pos[key] = --i;
            KV[key] = value;
        }
    }
};
