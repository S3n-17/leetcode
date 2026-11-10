class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        int s = arrival.size();

        vector<int> count(k, 0);

        set<int> servers;

        for(int i = 0; i < k; i++) {
            servers.insert(i);
        }

        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> busy;

        for(int i = 0; i < s; i++) {

            while(!busy.empty() && busy.top().first <= arrival[i]) {
                servers.insert(busy.top().second);
                busy.pop();
            }

            if(servers.empty()) {
                continue;
            }

            int preferred = i % k;

            auto it = servers.lower_bound(preferred);

            if(it == servers.end()) {
                it = servers.begin();
            }

            int server = *it;

            servers.erase(it);

            busy.push({arrival[i] + load[i], server});

            count[server]++;
        }

        int maxCount = *max_element(count.begin(), count.end());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            if(count[i] == maxCount) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};