#include <iostream>
#include <cmath>
using namespace std;

	double p(int i,	double y){
		if (i==0) return 1;
		else if (i>0) return y*p(i-1,y);
	}
	double Integrate(int n, double x){
		double result;
		if (n==1) {result=-cos(x);cout<<"n="<<n<<" Integrate="<<result<<endl;
			return result; 
			}
		else if (n==2){ cout<<"n="<<n<<" Integrate="<<x/2-1/4*sin(2*x)<<endl;return  x/2-1/4*sin(2*x); }
		else if (n>2) {
			
			cout<<"n="<<n<<" "<<-p(n-1,sin(x))<<"*"<<cos(x)/n<<"+"<<(n-1)/n<<"*"<<"Integrate("<<n-2<<","<<x<<")"<<endl;
			result=-p(n-1,sin(x))*cos(x)/n+(n-1)/n*Integrate(n-2,x);
			cout<<"n="<<n<<" "<<result<<endl;
			
			return result;
	}
	
	}
int main() {
	int b1, b2, n, x;double a,b;
	
	cin>>b1>>b2;
     cout<<"Enter b1 and b2: "<<b1<<" and "<<b2<<endl;
	
	cin>>n;
	cout<<"Enter n= "<<n<<endl;
	cout<<"n = "<<n<<" "<<"Integrate( "<<b2<<")"<<endl;
	b=Integrate(n,b2);
	cout<<endl;
		cout<<"n = "<<n<<" "<<"Integrate( "<<b1<<")"<<endl;
	a=Integrate(n,b1);
	cout<<endl;
	 cout<<"n = "<<n<<" "<<"Integrate = "<<b-a<<endl;
	return 0;
}
