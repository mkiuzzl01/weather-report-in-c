#include <stdio.h>

#define maxPeriod 60

//Declare There function Name And Pera_Meter
void takeTemperature(int period, float regularTemperature[]);
void averageTemperature(int period, float regularTemperature[]);



int main() {
    int period;
    float regularTemperature[maxPeriod];

    printf("Enter Your Period (e.g., a month, two months, 3 months): ");
    scanf("%d", &period);

//Check user input is valid, Here this condition
    if (period <= 0 || period > maxPeriod) {
        printf("Invalid! Please enter a specific value.\n");
        return 1;
    }

//Call There are Function
    takeTemperature(period, regularTemperature);
    averageTemperature(period, regularTemperature);
    return 0;
}


// Take a Input from user and set in array, Here this function
void takeTemperature(int period, float regularTemperature[]) {
    printf("Enter Daily Temperature Readings for %d Days:\n", period);

    for (int day = 0; day < period; ++day) {
        printf("Enter temperature for day %d: ", day + 1);
        scanf("%f", &regularTemperature[day]);
    }
}
// Average temperature from array , Here this function
void averageTemperature(int period, float regularTemperature[]){

    float sum = 0.0;

    for (int day = 0; day < period; ++day) {
        sum += regularTemperature[day];
    }

    float averageValue = sum / period;
    printf("Average Temperature: %.2f C\n", averageValue);
}
// Highest and Lowest temperature Calculate of array Values, Here this function
void Max_Min_Temperature(float regularTemperature[] , int period){
    float max_temperature = ;
    float min_temperature = 0;

    if ()
}