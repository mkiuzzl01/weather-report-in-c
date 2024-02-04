#include <stdio.h>

#define maxPeriod 60

// Declare There function Name And Pera_Meter
void averageTemperature(int period, float regularTemperature[]);
void Max_Min_Temperature(float regularTemperature[], int period);
void DisplayTemperatureFromArray(int period, float regularTemperature[]);

int main()
{
    int period;
    // last Two Months Data in this Array
    float regularTemperature[maxPeriod] = {28.3, 27.9, 26.8, 25.5, 24.1, 23.8, 22.7, 21.4, 20.9, 19.6, 18.2, 17.9, 16.7, 15.2, 14.8, 13.5, 12.1, 11.8, 10.7, 91.4, 83.9, 7.6, 61.2, 5.9, 42.7, 31.2, 2.8, 15.5, 46.1, 80.4, 79.8, 78.3, 76.9, 75.5, 74.2, 73.8, 72.7, 71.3, 70.8, 69.5, 68.1, 66.7, 65.4, 65.0, 63.9, 62.5, 61.0, 59.6, 58.3, 57.8, 56.5, 55.1, 53.7, 52.4, 52.0, 50.9, 49.5, 48.0, 46.6, 65.33, 32.21};

    printf("Enter Your Period Like:(a month, two months, 3 months): ");
    scanf("%d", &period);
    printf("The Temperature readings of %d Days View Here:\n", period);

    // Check user input is valid, Here this condition
    if (period <= 0 || period > maxPeriod)
    {
        printf("Invalid! Please enter a specific value.\n");
        return 1;
    }

    // Call There are Function
    averageTemperature(period, regularTemperature);
    Max_Min_Temperature(regularTemperature, period);
    DisplayTemperatureFromArray(period, regularTemperature);
    return 0;
}

// Average temperature from array , Here this function
void averageTemperature(int period, float regularTemperature[])
{

    float sum = 0.0;

    for (int day = 0; day < period; ++day)
    {
        sum += regularTemperature[day];
    }

    float averageValue = sum / period;
    printf("Average Temperature: %.2f C\n", averageValue);
}

// Highest and Lowest temperature Calculate of array Values, Here this function
void Max_Min_Temperature(float regularTemperature[], int period)
{

    float max_temperature = regularTemperature[0];
    float min_temperature = regularTemperature[0];

    int max_day = 1;
    int min_day = 1;

    // Find The Largest value use loop
    for (int day = 1; day < period; ++day)
    {

        if (max_temperature < regularTemperature[day])
        {
            max_temperature = regularTemperature[day];
            max_day = day + 1;
        }
    }

    // Find The Smallest value use loop
    for (int day = 1; day < period; ++day)
    {

        if (min_temperature > regularTemperature[day])
        {
            min_temperature = regularTemperature[day];
            min_day = day + 1;
        }
    }

    printf("Highest Temperature: %.2f C (Day %d)\n", max_temperature, max_day);
    printf("Lowest Temperature: %.2f C (Day %d)\n", min_temperature, min_day);
}


// View All Regular Day Temperature and Convert Celsius to Fahrenheit
void DisplayTemperatureFromArray(int period, float regularTemperature[])
{
    printf("\nDay\tTemperature (C)\tTemperature (F)\n");

    for (int day = 0; day < period; ++day)
    {
        printf("%d\t%.2f\t\t\t%.2f\n", day + 1, regularTemperature[day], (regularTemperature[day] * 9 / 5) + 32);
    }
}


