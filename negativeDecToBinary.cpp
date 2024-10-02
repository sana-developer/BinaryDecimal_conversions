#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main() {
	
	int n;
	cout<<"Enter a decimal number: ";
	cin>>n;
	
	int ans = 0;
	int i = 0;
	
	//-ve number to binary conversion
	if(n<0) {
		int positive_n = abs(n);
		
		while(positive_n != 0) {
		int bit = positive_n & 1;
		
		//take 1's complement 
		int complement_bit = bit ^1;
		ans = (complement_bit * pow(10,i)) + ans;
		cout<<ans<<endl;
		positive_n = positive_n>>1;
		i++;
	}
	
	//take 2's complement 
	int carry = 1;
	int two_complement = 0;
	int i = 0;
	
	while(ans!=0 || carry != 0) {
		int digit = ans % 10;
		ans /= 10;
		
		int sum = digit + carry;
		if(sum == 2) {
			digit = 0;
			carry = 1;
		} else {
			carry = 0;
		}
		
		two_complement = (digit* pow(10,i)) + two_complement;
		i++;
	}
	
	
	
	cout<<" 2's complement is "<<two_complement<<endl;
	
	}
	
	
	return 0;
}
