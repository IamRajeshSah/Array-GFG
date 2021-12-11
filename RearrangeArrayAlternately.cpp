// C++ program to rearrange an array in minimum 
// maximum form 
#include<iostream>
using namespace std;

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int min_idx = 0;
    	int max_idx = n-1;
    	
    	int maxEle = arr[n-1]+1;
    	
    	for(int i = 0; i < n; i++){
    	    if(i % 2 == 0) { //even
    	        arr[i] = arr[i] + ((arr[max_idx]%maxEle)*maxEle);
    	        max_idx--;
    	    }
    	    else{
    	        arr[i] = arr[i] + ((arr[min_idx]%maxEle)*maxEle);
    	        min_idx++;
    	    }
    	}
    	
    	for(int i = 0; i< n ; i++){
    	    arr[i] = arr[i]/maxEle;
    	}
    }
};

int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 