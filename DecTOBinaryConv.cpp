#include<iostream>
#include<math.h>
using namespace std;

int main() {
	
	//decimal to binary conversion
	
	int n;
	cout<<"Enter a decimal number: ";
	cin>>n;
	
	int ans = 0;
	int i = 0;
	//when n is a positive number
	while(n != 0) {
		int bit = n&1;
		ans = (bit * pow(10,i)) + ans;
		cout<<ans<<endl;
		n = n>>1;
		i++;
	}
	
	cout<<" Answer is "<<ans<<endl;
	
	return 0;
}
