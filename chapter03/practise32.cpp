//
// Created by 萧铭聪 on 2022/7/5.
//

#include "practise32.h"
#include <iostream>
using namespace std;

int fn(double d1){
    cout << d1 << endl;
    return 1;
}

void practise32(){
    int (*fp)(double);
    fp = fn;
    (*fp)(1);
}