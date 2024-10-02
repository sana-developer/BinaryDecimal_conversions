#include<iostream>
#include<math.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int binaryNum[32];
	int i = 0;
	
	while(n>0) {
		
		int last_bit = n&1;
		binaryNum[i] = last_bit;
		
		n = n>>1;
		i++;
	}
	
	for(int j = i-1; j>=0; j--) {
		cout<<binaryNum[j]<<" ";
	}
	
	return 0;
}
