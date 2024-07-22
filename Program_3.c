#include <stdio.h>

int main() {
    int ch;
    printf("Enter your choice (1 for circle, 2 for rectangle): ");
    scanf("%d", &ch);

    switch (ch) {
        case 1: {
            float r;
            printf("Enter the radius of the circle: ");
            scanf("%f", &r);
            float area = 3.14159 * r * r;  // Pi * r^2
            printf("area = %.2f\n", area);
            break;
        }
        case 2: {
            float l, b;
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &l, &b);
            float area = l * b;
            printf("area = %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

