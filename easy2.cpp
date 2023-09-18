#include "easy.h"
#include <iostream>
using namespace std;
int itc_revnbr(int num){
    int a = 0;
    int k = 0;
    int h;
    if(num < 0){
    num = itc_fabs(num);
    while(num > 0){
  a = num % 10;
  num = num / 10;
  k = k * 10 + a;
    }
        return k * -1;
        }else{
        while(num > 0){
  a = num % 10;
  num = num / 10;
  k = k * 10 + a;
            }
        return k;
        }
    }
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
