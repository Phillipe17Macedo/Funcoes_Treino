#include <iostream>

using namespace std;

double delta(double a, double b, double c){
	double d = (b * b) - (4 * a * c);
	return d;
}

int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%lf\n", delta(a, b, c));
	return 0;
}
