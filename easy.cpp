#include "easy.h"
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
