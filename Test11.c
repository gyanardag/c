#include <stdio.h>;

struct Car{

    char brand[50];
    char model[50];
    int year;

};

int main(){

    struct Car car1 = {"BMW","X5",2023};
    struct Car car2 = {"KIA","SPORTAGE",2013};
    struct Car car3 = {"RENAULT","CLIO",2017};

    printf("Car --> %s %s %d\n", car1.brand, car1.model, car1.year);
    printf("Car --> %s %s %d\n", car2.brand, car2.model, car2.year);
    printf("Car --> %s %s %d\n", car3.brand, car3.model, car3.year);

    return 0;
}