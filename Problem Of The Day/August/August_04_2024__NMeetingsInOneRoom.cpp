// Level: EASY

class Solution {
    public:
        // Function to find the maximum number of meetings that can
        // be performed in a meeting room.
        int maxMeetings(int n, int start[], int end[]) {
            vector<pair<int,int>> meet(n);
            
            for(int i = 0; i < n; i++)
                meet[i] = {end[i], start[i]};
            
            // Sort meetings by end time
            sort(meet.begin(), meet.end());
            
            // Initialize count of meetings and track last meeting's end time
            int count = 1;
            int time = meet[0].first;
            
            // Check if subsequent meetings can be attended
            for(int i = 1; i < n; i++) {
                if(meet[i].second > time) {
                    count++;          // Increment count if meeting can be attended
                    time = meet[i].first; // Update end time to current meeting's end time
                }
            }
            
            return count; // Return the maximum number of non-overlapping meetings
        }
};