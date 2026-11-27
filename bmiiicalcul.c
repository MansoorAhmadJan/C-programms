#include <stdio.h>

int main()
{
    float weight;
    float height;
    float bmi;

    printf("Enter weight in kg: ");
    if (scanf("%f", &weight) != 1 || weight <= 0)
    {
        printf("Invalid weight\n");
        return 1;
    }

    printf("Enter height in meters: ");
    if (scanf("%f", &height) != 1 || height <= 0)
    {
        printf("Invalid height\n");
        return 1;
    }

    bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("Normal\n");
    }
    else if (bmi >= 25 && bmi < 31)
    {
        printf("Overweight\n");
    }
    else
    {
        printf("Obese\n");
    }

    return 0;
}