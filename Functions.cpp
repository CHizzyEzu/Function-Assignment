// Function assignment 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

void printNumber(int number)
{

    cout << number;

};

int doubleNumber(int number)
{

    return number * 2;
};
double doubleNumber(double number)
{
    return number * 2.0;
};
void doubleNumber(int& number)
{
    number *= 2;
};


void printMessaging(string message)
{
    cout << message;
};
void printMessaging(string message, ostream& os)
{
    os << message;
};


int getIntValue()
{
    int input1;
    cin >> input1;

    return input1;
}
;
int randBetween(int min, int max)
{
    unsigned seed = time(0);
    srand(seed);

    int num1 = (rand() % (max - min + 1)) + min;

    return num1;

};

double circleArea(double radius)
{

    double total = (radius * 3.14);
    return total;
};

