#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int rage = 0;      // 현재 분노
    long long total = 0; // 누적 분노 합 (최대 2e5 * 2e5 → 오버플로우 주의)

    for (int i = 0; i < n; i++) {
        int weather;
        scanf("%d", &weather);

        rage += (weather == 1) ? 1 : -1;
        total += rage;
    }

    printf("%lld\n", total);
    return 0;
}
