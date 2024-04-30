#include <stdio.h>

int sumOfNums(int a, int b) {

    int sum = a+b;
    return sum;
}

int main(){

    int total=sumOfNums(9999,8888);
    printf("The sum of the numbers: %d\n",total);

    int chr=126;

    for (int i=0    ;i<=40;i++){
        printf("Ascii code %d --> %c\n", i,i);
    }

    char myText[]="Verification and Validation";
    printf("%s\n", myText);

    float f1 = 1e1;
    double d1 = 12E4;

    printf("%f\n", f1);
    printf("%lf\n", d1);

    float floatNum=5.5;

    printf("%f\n",floatNum);
    printf("%.1f\n",floatNum);
    printf("%.2f\n",floatNum);
    printf("%.4f\n",floatNum);

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    int x = 5;
    x ^= 3;
    printf("%d", x);

    return 0;

}