// Level: MEDIUM

class Solution {
    public:
        vector <int> bottomView(Node *root) {
            queue<pair<Node *, int>> q;
            unordered_map<int,int> mp;
            int mn = 0;
            int mx = 0;
            vector<int> ans;
            q.push({root,0});
            
            while(q.size()){
                auto temp = q.front();
                q.pop();
                Node * first = temp.first;
                int second = temp.second;
                mp[second] = first->data;
                mn = min(mn,second);
                mx = max(mx,second);
                if(first->left)
                    q.push({first->left, second -1});
                if(first->right)
                    q.push({first->right, second + 1});
            }
            
            for(int i = mn; i <= mx; i++)
                ans.push_back(mp[i]);    
                
                
            return ans;
            // Your Code Here
        }
};