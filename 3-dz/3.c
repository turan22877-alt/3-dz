#include <stdio.h>
#include <locale.h>
/*int main() {
    setlocale(LC_CTYPE, "RUS");

    float rebro, obem, bokovaya_ploshad;

    printf("Введите длину ребра куба: ");
    scanf_s("%f", &rebro);//простите пожалуйста я устал писать _CRT_SECURE_NO_DEPRECATE 

    obem = rebro * rebro * rebro;
    bokovaya_ploshad = 4 * rebro * rebro;

    printf("Объём куба: %.2f\n", obem);
    printf("Площадь боковой поверхности: %.2f\n", bokovaya_ploshad);

    return 0;
}*/

float niga(float rebro) {
    float obem = rebro * rebro * rebro;
    return obem;
}
float figa(float rebro) {
    float bokovaya_ploshad = 4 * rebro * rebro;
    return bokovaya_ploshad;
}
int main(void){
    setlocale(LC_CTYPE, "RUS");

    float rebro, obem, bokovaya_ploshad;

    printf("Введите длину ребра куба: ");
    scanf_s("%f", &rebro);//простите пожалуйста я устал писать _CRT_SECURE_NO_DEPRECATE 
    obem = niga(rebro);
    bokovaya_ploshad = figa(rebro);
    printf("Объём куба: %.2f\n", obem);
    printf("Площадь боковой поверхности: %.2f\n", bokovaya_ploshad);

    return 0;
}