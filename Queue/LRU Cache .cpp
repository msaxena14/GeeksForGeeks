// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
    list<int> st;
    unordered_map<int, list<int>::iterator>  mp;
    unordered_map<int, int> values;
    int size;
    public:
    //Constructor for initializing the cache capacity with the given value
    
    LRUCache(int cap)
    {
        size = cap;
    }
    
    //Function to return value corresponding to the key.
    int get(int key){
        if(mp.find(key)==mp.end()){
            return -1;
        }
        st.erase(mp[key]);
        mp.erase(key);
        st.push_front(key);
        mp[key] = st.begin();
        return values[key];
    }
    
    //Function for storing key-value pair.
    void set(int key, int value){
        if(mp.find(key) == mp.end()){
            if(st.size() == size){
                int x = st.back();
                st.pop_back();
                values.erase(x);
                mp.erase(x);
            }
        }
        else{
            st.erase(mp[key]);
            mp.erase(key);
            values.erase(key);
        }
        st.push_front(key);
        mp[key] = st.begin();
        values[key] = value; 
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
