#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");

    float rebro, obem, bokovaya_ploshad;

    printf("Введите длину ребра куба: ");
    scanf_s("%f", &rebro);//простите пожалуйста я устал писать _CRT_SECURE_NO_DEPRECATE 

    obem = rebro * rebro * rebro;
    bokovaya_ploshad = 4 * rebro * rebro;

    printf("Объём куба: %.2f\n", obem);
    printf("Площадь боковой поверхности: %.2f\n", bokovaya_ploshad);

    return 0;
}