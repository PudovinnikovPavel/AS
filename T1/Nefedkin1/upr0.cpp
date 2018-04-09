#include <stdio.h>
int main(void)
{
    int h,d,r;
    double R, Sb, St;
    double Pi = 3.14159;
    printf("Введите высоту бака (см): ");
    scanf("%d", &h);
    printf("Введите диаметр бака (см): ");
    scanf("%d", &d);
    printf("Введите расход краски для одной банки(кв.м): ");
    scanf("%d", &r);

    R = (double)d / 2.0;
    Sb = (double)h * (2.0 * Pi * R);
    Sb = Sb * 2.0 / 10000;

    St = Pi * R * R;
    St = St * 4.0 / 10000;
    printf("Для покраски бочки требуется %.2f банок\n (Из них: %.2f для боковой поверхности и %.2f для дна и крышки)\n", (Sb + St) / (double)r, Sb / (double)r, St / (double)r);
}