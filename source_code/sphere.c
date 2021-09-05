#include <math.h>
#include <stdio.h>
#include <string.h>
double sin(), cos();
int main() {
    int size = 30;       /*change the value to control the size*/
    int y_posi = 0;      /*change the value to control the y-position of the donut (positive = up)*/
    int x_posi = 0;      /*change the value to control the x-position of the donut (positive = right)*/
    float speed_x = 0;   /*change the value to control the rotating speed about x-axis*/
    float speed_z = 2.0; /*change the value to control the rotating speed about z-axis*/
    float speed_y = 0;
    float x_1 = 0.5, x_2 = 0.3, x_3 = 1;
    float R = 2.5; /*radius*/
    float A = 0, B = 0, C = 0, i, j, z[1760];
    double distance = 4.0;
    char b[1760];
    int brightness = 14; /*recommend: 11*/
    printf("\x1b[2J");
    for (;;) {
        memset(b, 32, 1760);
        memset(z, 0, 7040);
        for (j = 0; 6.28 > j; j += 0.02)
            for (i = 0; 6.28 > i; i += 0.02) {
                double a = cos(i), m = sin(i), c = cos(j), f = sin(j), D = 1 / (5 + R * c);
                int x = 40 + x_posi + size * R * a * f * D, y = 12 - y_posi + size / 2 * R * m * f * D, o = x + 80 * y;
                double g = distance / 1.73 * R * (x_1 * (cos(C) * cos(B) + sin(A) * sin(B) * sin(C)) + x_2 * (sin(B) * cos(C) - sin(A) * sin(C) * cos(B)) - x_3 * cos(A) * sin(C)) - R * a * f, h = distance / 1.73 * R * (-sin(B) * cos(A) * x_1 + cos(A) * cos(B) * x_2 - sin(A) * x_3) - R * m * f, l = distance / 1.73 * R * ((-sin(C) * cos(B) + sin(A) * sin(B) * cos(C)) * x_1 + (-sin(B) * sin(C) - sin(A) * cos(B) * cos(C)) * x_2 - x_3 * cos(A) * cos(C)) - c * R;
                int N = brightness * (g * a * f + h * m * f + l * c) / sqrt(g * g + h * h + l * l);
                if (N > 11) {
                    N = 11;
                }
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*$#@壁"[N > 0 ? N : 0];
                }
            }
        printf("\x1b[H");
        for (int k = 0; 1761 > k; k++) putchar(k % 80 ? b[k] : 10);
        A += 0.02 * speed_x;
        B += 0.02 * speed_z;
        C += 0.02 * speed_y;
        if (A > 6.28) {
            A = A - 6.28;
        }
        if (B > 6.28) {
            B = B - 6.28;
        }
        if (C > 6.28) {
            C = C - 6.28;
        }
    }
}