#include "es1.h"
#include <iostream>
using namespace std;
void itc_name(){
cout << "Roman";
}

void itc_fio(){
    itc_name();
 cout << " " << "Rolandovich" << " " << "Sakania";
}

int itc_abs(int num){
    if(num >= 0){
        return num;
    }else{
        return num * -1;
    }
}
double itc_fabs(double num) {
        if(num > 0){
            return num;
        }else{
            return num * -1;
        }
    }
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
double itc_fmin(double num, double num2){
    if(num < num2){
        return num;
    }
    return num2;
}
int itc_sqrt(int num){
    for (int i = 0; i < num; i++){
        if(num - i * i == 0){
            return i;
        }
    }
    return -1;
}
int itc_skv(int num){
    if (num >= 0){
        return num * num;
    }
    return -1;
}
int itc_spr(int a, int b){
    if(a >= 0 && b >= 0){
        return a * b;
    }
    return -1;
}
itc_str(int a, int b, int c){
    return a;
}
double itc_scir(int radius){
        return 0;
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
