#include "easy.h"
#include <iostream>
using namespace std;
double itc_scir(int radius){
        double sum;
        double p = 3.14;
        sum = 2 * p * radius;
        return sum;
}
double itc_pow(int num, int step){
 return 0;
}
bool itc_ispositive(int num){
    if(num >= 0){
        return true;
    }
    return false;
}
bool itc_ispositive_d(double num){
    if(num >= 0){
        return true;
    }
    return false;
}
