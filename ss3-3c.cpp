#include <stdio.h>

int main() {
    float radius, circumference, area;
    const float PI = 3.14;

    printf("Nhập bán kính hình tròn (r): ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Chu vi hình tròn: %.2f\n", circumference);
    printf("Diện tích hình tròn: %.2f\n", area);

    return 0;
}