#include<stdio.h>
int main()
{
    int t, h, w;
    t=25;
    h=50;
    w=10;
    double W = calculate_weather(t, h, w);
    printf("")
}
double calculate_weather(double t, double h, double w) {
    return 0.5 * t * t - 0.2 * h + 0.1 * w - 15;
}