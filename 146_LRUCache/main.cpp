#include <iostream>
#include <vector>
#include <map>
using namespace std;

class LRUCache {
    map<int, int> lruMap;
    map<int, int> lruCache;
    const int num;
public:
    LRUCache(int capacity) : num(capacity){

    }
    
    int get(int key) {
        if (lruCache.find(key) == lruCache.end()) {
            return -1;
        } else {
            lruMap[key] += 1;
            return lruCache[key];
        }
    }
    
    void put(int key, int value) {
        if (lruCache.size() < num) {
            lruMap[key] += 1;
            lruCache[key] = value;
        } else {
            
        }
        
    }
};

int main() {
    auto *p = new LRUCache(2);
}