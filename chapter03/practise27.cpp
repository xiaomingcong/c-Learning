//
// Created by 萧铭聪 on 2022/6/27.
//

#include "practise27.h"
#include "../util/util.h"

void practise27(){
    const double cd[10] = {0,1,2,3,4,5,6,7,8};
    volatile double vd[10];
    printArr(10, (double*)&cd);
    int* j = (int*) &cd;
    for(int i = 0; i < 10; i++) {
        *(j + i) = 3;
    }
    printArr(10, j);

    printArr(10, (double*)&vd);
    int* k = (int*) &cd;
    for(int i = 0; i < 10; i++) {
        *(k + i) = 3;
    }
    printArr(10, k);

    const int i = 10;
    int* chi = const_cast<int*>(&i);
    *chi = 22;
    cout << endl << *chi << endl;
}