#include <iostream>
using namespace std;

int main() {
	int n, i, j, s=0,s1=0;
	cin>>n;
	int a[n][n];
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			cin>>a[i][j];

		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				if (i==j)
				s=s+a[i][j];
				if (i==n-j-1)
					s1+=a[i][j];
			
			}
		}
			cout<<s<<" "<<s1;
	return 0;
}
