// Level: MEDIUM

/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution {
    public:
        //Function to find the maximum profit and the number of jobs done.
        vector<int> JobScheduling(Job arr[], int n) { 
            // your code here
            map<int,vector<int>>mp;
            vector<int>v;
            v.push_back(0);
            
            for(int i=0;i<n;i++){
                mp[arr[i].dead].push_back(arr[i].profit);
            }
            
            for(auto it:mp) 
                v.push_back(it.first);
            
            priority_queue<int>pq;
            sort(v.begin(),v.end());
            
            int time=v.back();
            
            v.pop_back();
            int cnt=0,sum=0;
            
            while(time!=0){
                int ntime=v.back();
                int have=time-ntime;
                for(auto it:mp[time]){
                    pq.push(it);
                }
                while(pq.size()>0 and have>0){
                     sum+=pq.top();
                     pq.pop();
                     have--,cnt++;
                }
                time=ntime;
                v.pop_back();
            }
            
            return {cnt,sum};
        } 
};