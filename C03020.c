#include <stdio.h>

int is_palindrome(int num) {
    int reversed = 0, original = num;
    while (num) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int cnt = 0;
    if(a > b)
        a ^= b ^= a ^= b;
    
    for (int i = a; i <= b; ++i) {
        int num = i;
        int tong = 0, has_6 = 0;
        while (num) {
            tong += num % 10;
            if (num % 10 == 6) has_6 = 1;
            num /= 10;
        }
        if (tong % 10 == 8 && has_6 && is_palindrome(i))
            printf("%d ", i);
    }
    return 0;
}