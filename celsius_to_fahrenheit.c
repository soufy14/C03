#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    // Conversion Celsius -> Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.1f °C équivaut à %.1f °F\n", celsius, fahrenheit);

    return 0;
}
// ce programme convertit une température 