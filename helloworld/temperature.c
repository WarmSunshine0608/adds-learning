#include <stdio.h>
/*当fahar =0, 20, ... 300时，分别打印华氏温度与摄氏度温度 */
main()
{
    int fahar, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahar = lower;
    while (fahar <= upper)
    {
        celsius = 5 * (fahar - 32) / 9;
        printf("%d\t%d\n", fahar, celsius);
        fahar = fahar + step;
    }
    /*右对齐，fahar占3个字宽，celsius占6个字宽 */
    fahar = lower;
    while (fahar <= upper)
    {
        celsius = 5 * (fahar - 32) / 9;
        printf("%3d %6d\n", fahar, celsius);
        fahar = fahar + step;
    }
}