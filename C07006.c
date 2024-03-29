#include <stdio.h>
#include <math.h>

int check(double a, double b, double c){
    if (a == 0 || b == 0 || c == 0)
        return 0;
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        double xa, ya, xb, yb, xc, yc;
        scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &xb, &yb, &xc, &yc);
        double AB = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
        double AC = sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));
        double BC = sqrt((xb - xc) * (xb - xc) + (yb - yc) * (yb - yc));
        if (check(AB, AC, BC) == 0)
            printf("INVALID\n");
        else{
            double p = (AB + AC + BC) / 2.0;
            double s = sqrt(p * (p - AC) * (p - AB) * (p - BC));
            printf("%0.2lf\n", s);
        }
    }
    return 0;
}