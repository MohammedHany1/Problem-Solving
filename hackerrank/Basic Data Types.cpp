//www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int intNum;
    long longNum;
    char charVar;
    float floatNum;
    double doubleNum;
    scanf("%d %ld %c %f %lf", &intNum, &longNum, &charVar, &floatNum, &doubleNum);
    /*cout<<intNum<<endl;
    cout<<longNum<<endl;
    cout<<charVar<<endl;
    cout<<floatNum<<endl;
    cout<<doubleNum<<endl;*/
    printf("%d", intNum); cout << endl;
    printf("%ld", longNum); cout << endl;
    printf("%c", charVar); cout << endl;
    printf("%f", floatNum); cout << endl;
    printf("%lf", doubleNum); cout << endl;
    return 0;
}
