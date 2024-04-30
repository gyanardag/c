#include <stdio.h>
//#include <string.h>

float toCelcius(float);

int main(){

    float fahr,result;

    fahr = 98.8;

    result=toCelcius(fahr);

    return 0;

}

float toCelcius(float fahrenheit){
    
    float celcius;

    printf("Fahrenheit degree: %2.f\n", fahrenheit);
    celcius = (5.0/9.0) * (fahrenheit-32.0);
    printf("Celcius degree: %2.f\n", celcius);

    return celcius;
}
