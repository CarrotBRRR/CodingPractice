#include <stdlib.h>
#include <vector>
#include <unordered_map>
#include <time.h>

using namespace std;

class RandomizedSet {
    private:
        vector<int> v;
        unordered_map<int, int> m;
        
    public:
    RandomizedSet() {
        srand(time(NULL));
    }

    bool insert(int val) {
        if (m.find(val) != m.end()) {
            return false;
        }
        v.push_back(val);
        m[val] = v.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (m.find(val) == m.end()) {
            return false;
        }
        int last = v.back();
        m[last] = m[val];
        v[m[val]] = last;
        v.pop_back();
        m.erase(val);
        return true;
    }

    int getRandom() {
        return v[rand() % v.size()];
    }
};

