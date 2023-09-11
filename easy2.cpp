#include "easy.h"
#include <iostream>
using namespace std;
int itc_revnbr(int num){
    int a;
    while(num > 0){
  a = num % 10;
  num = num / 10;
  cout << a;
}
bool itc_iseven(int num){
    if(num % 2 == 0){
        return true;
    }
    return false;
}
int itc_max(int num, int num2){
    if(num > num2){
        return num;
    }
    return num2;
}
int itc_min(int min1, int min2){
    if(min1 < min2){
        return min1;
    }
    return min2;
}
double itc_fmax(double num, double num2){
    if(num > num2){
        return num;
    }
    return num2;
}
