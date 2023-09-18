#include "easy.h"
#include <iostream>
using namespace std;
double itc_fmin(double num, double num2){
    if(num < num2){
        return num;
    }
    return num2;
}
int itc_sqrt(int num){
    for (long long i = 0; i < num; i++){
        if(num - i * i == 0){
            return i;
        }
    }
    return -1;
}
int itc_skv(int num){
    int a;
    if(num > 0){
    a = num * num;
        return a;
    }else{
    return -1;
    }
}
int itc_spr(int a, int b){
    int c;
    if(a > 0 && b > 0){
            c = a * b;
        return c;
    }else{
    return -1;
    }
}
int itc_str(int a, int b, int c){
    int g;
    double p, sum;
    p = 3.14;
    sum = (p * (p - a)*(p - b)*(p - c));
    return itc_sqrt(sum);
}

