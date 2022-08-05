//
// Created by 萧铭聪 on 2022/6/27.
//

#include "practise18.h"
#include "../util/util.h"
#include <iostream>
using namespace std;

void practise18(){
    int a1[11];
    int* a2=&a1[11];
    for(int i = 0; i < 11; i++){
        a1[i] = i;
    }
    printArr(11,a1);
    for(int i = 0; i < 22; i++){
        *(a2 + i) = i;
    }
    printArr(33,a1);
}