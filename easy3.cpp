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
    if (num >= 0){
        return num * num;
    }else{
    return -1;
    }
}
int itc_spr(int a, int b){
    if(a >= 0 && b >= 0){
        return a * b;
    }
    return -1;
}
int itc_str(int a, int b, int c){
    int sum;
    sum = a + b + c;
    return sum;
}
