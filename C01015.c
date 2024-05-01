#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
    int a, b, c;
    float x1, x2;
    ll delta;
    scanf("%d%d%d", &a, &b, &c);
    delta = (b * b - 4 * a * c);
	if(delta > 0){
		x1 = 1.0 * (-b + sqrt(delta)) / (2.0 * a);
		x2 = 1.0 * (-b - sqrt(delta)) / (2.0 * a);
		if(x1 < x2)
			printf("%.2f %.2f", x2, x1);
		else if(x1 > x2)
			printf("%.2f %.2f", x1, x2);
    }
	else if(delta == 0)
		printf("%.2f", - (double) (b)/(2*a));
	else
		printf("NO");
    return 0;
}