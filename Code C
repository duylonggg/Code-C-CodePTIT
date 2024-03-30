#include <stdio.h>
#include <math.h>

int min_square_covering(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    int max_x = fmax(x2, x4);
    int max_y = fmax(y2, y4);

    int min_x = fmin(x1, x3);
    int min_y = fmin(y1, y3);

    int side_length = fmax(max_x - min_x, max_y - min_y);

    return side_length * side_length; 
}

int main() {
    int x1, y1, x2, y2; 
    int x3, y3, x4, y4; 

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    scanf("%d%d%d%d", &x3, &y3, &x4, &y4);

    int min_square_area = min_square_covering(x1, y1, x2, y2, x3, y3, x4, y4);

    printf("%d\n", min_square_area);
    return 0;
}
