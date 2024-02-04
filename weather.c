#include <stdio.h>

#define maxPeriod 60

// Declare There function Name And Pera_Meter
void takeTemperature(int period, float regularTemperature[]);
void averageTemperature(int period, float regularTemperature[]);
void Max_Min_Temperature(float regularTemperature[], int period);

int main()
{
    int period;
    float regularTemperature[maxPeriod];

    printf("Enter Your Period (e.g., a month, two months, 3 months): ");
    scanf("%d", &period);

    // Check user input is valid, Here this condition
    if (period <= 0 || period > maxPeriod)
    {
        printf("Invalid! Please enter a specific value.\n");
        return 1;
    }

    // Call There are Function
    takeTemperature(period, regularTemperature);
    averageTemperature(period, regularTemperature);
    Max_Min_Temperature(regularTemperature,period);
    return 0;
}

// Take a Input from user and set in array, Here this function
void takeTemperature(int period, float regularTemperature[])
{
    printf("Enter Daily Temperature Readings for %d Days:\n", period);

    for (int day = 0; day < period; ++day)
    {
        printf("Enter temperature for day %d: ", day + 1);
        scanf("%f", &regularTemperature[day]);
    }
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

    for (int day = 1; day < period; ++day){

        if (max_temperature < regularTemperature[day]){
            max_temperature = regularTemperature[day];
            max_day = day+1;
        }
    }

    for (int day = 1; day < period; ++day){

        if (min_temperature > regularTemperature[day]){
            min_temperature = regularTemperature[day];
            min_day = day+1;
        }
    }

    printf("Highest Temperature: %.2f C (Day %d)\n", max_temperature,max_day);
    printf("Lowest Temperature: %.2f C (Day %d)\n", min_temperature,min_day);
}

// Convert temperature from Array Celsius to Fahrenheit, This function Here
void TemperatureConvert(float regularTemperature[], int period){

      for (int day = 0; day < period; ++day) {
        regularTemperature[day] = (regularTemperature[day] * 9/5) + 32;
      }
      
}