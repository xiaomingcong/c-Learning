//
// Created by 萧铭聪 on 2022/6/27.
//

#include "practise25.h"
#include <iostream>
using namespace std;

void practise25(){
    float f1 = 3.14f;
    char* ch = reinterpret_cast<char *>(&f1);
    cout << *ch << endl;
    cout << &f1 << endl;
}