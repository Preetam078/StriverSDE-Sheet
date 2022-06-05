class Solution 
{
    private:
    static bool comparasion(Job a, Job b) {
        return (a.profit > b.profit);
    }
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n, comparasion);
        
        int maxi = arr[0].dead;
        for( int i = 1; i < n; i++ ) {
            maxi = max(maxi,arr[i].dead);
        }
        
        int slot[maxi+1];
        int count = 0;
        int profit = 0;
        
        for( int i = 0 ; i <= maxi; i++) {
            slot[i] = -1;
        }
        
        for(int i = 0; i < n; i++) {
            for( int j = arr[i].dead; j >0; j--) {
                if(slot[j] == -1) {
                    slot[j] = i;
                    count++;
                    profit += arr[i].profit;
                    break;
                }
            }
        }
        return {count,profit};
    } 
};