    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int platform = 1, result = 1;
    	int i = 1, j = 0;
    	
    	while( i < n && j < n) {
    	    if(arr[i] <= dep[j]) {
    	        //if the platform is not vacated..........
    	        platform++;
    	        i++;
    	    }
    	    else{
    	        // if the platform previously used is vacated........
    	        platform--;
    	        j++;
    	    }
    	    
    	    result = max(result, platform);
    	}
    	return result;
    }