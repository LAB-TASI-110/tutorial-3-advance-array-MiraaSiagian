#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int score;
        scanf("%d", &score);
        sum += score;
    }

    double average = (double)sum / n;

    printf("%d\n", sum);
    printf("%.2f\n", average);

    return 0;
}
