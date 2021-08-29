#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	     int n,k,s;
	     cin>>n>>k>>s;
	     
	    // int arr[n+k-1];
	    
	    int rem = s-(n*n);
	    
	     int box = (n+k-1)-n;
	     
	     cout<<(rem/box)<<endl;
	     
	     
	}
	return 0;
}
