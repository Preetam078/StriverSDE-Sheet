int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        int starting, ending, count = 1;
        
        for( int i = 0; i <n; i++) v.push_back(make_pair(end[i],start[i]));
        
        //sort according to the ending of the meeting to conduct max meeting as possible.
        sort(v.begin(), v.end());
        
        ending = v[0].first;
        starting = v[0].second;
        
        for(int i = 1; i <n; i++) {
            if(ending < v[i].second){
                ending = v[i].first;
                count++;
            }
        }
        return count;
    }