#include <iostream>
using namespace std;
int main(){
	long long n,m;
	double e;
	while(cin>> n >> m ) {
		e=(double) n / m;
		printf("%.3lf %lld\n",e,n%m);
	}
	return 0;
}
