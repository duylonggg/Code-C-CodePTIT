#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        float xa, ya, xb, yb, xc, yc;
        float a, b, c, xAB, yAB, xAC, yAC, xBC, yBC;
        scanf("%f%f%f%f%f%f", &xa, &ya, &xb, &yb, &xc, &yc);
    
        xAB = xb - xa;
        yAB = yb - ya;
        a = xAB * xAB + yAB * yAB;
    
        xAC = xc - xa;
        yAC = yc - ya;
        b = xAC * xAC + yAC * yAC;
    
        xBC = xc - xb;
        yBC = yc - yb;
        c = xBC * xBC + yBC * yBC;
        
        double p = sqrt(a) + sqrt(b) + sqrt(c);
    
        if(xAB * yAC == xAC * yAB)
            printf("INVALID\n");
        else
            printf("%.3lf\n", p);
    }
    return 0;
}