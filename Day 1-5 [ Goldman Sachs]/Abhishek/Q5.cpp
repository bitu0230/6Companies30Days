class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    ull i=1;
	    ull arr[n];
	    ull var1=0,var2=0,var3=0;
	    arr[0]=1;
	    while(i<n)
	    {   
	        ull res=min({arr[var1]*2,arr[var2]*3,arr[var3]*5});
	       
	        arr[i]=res;
	        i++;
	        if(res==arr[var1]*2)
	        var1++;
	        if(res==arr[var2]*3)
	        var2++;
	        if(res==arr[var3]*5)
	        var3++;
	    }
	   // for(i=0;i<n;i++)
	   // cout<<arr[i]<<" ";
	    
	    return arr[n-1];
	    // code here
	}
};
