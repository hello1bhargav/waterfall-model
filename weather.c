#include <stdio.h>

double calculate_weather(double t, double h, double w) {
    return 0.5 * t * t - 0.2 * h + 0.1 * w - 15;
}

int main() {
    FILE *file = fopen("weather_data.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    double t, h, w;
    while (fscanf(file, "%lf %lf %lf", &t, &h, &w) == 3) {
        double W = calculate_weather(t, h, w);
        printf("File Input - Weather Condition: %.2lf\n", W);
    }

    fclose(file);
    return 0;
}