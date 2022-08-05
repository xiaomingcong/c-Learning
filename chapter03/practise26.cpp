//
// Created by 萧铭聪 on 2022/6/27.
//

#include "practise26.h"
#include "../util/util.h"

void practise26(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    void* v = static_cast<void*>(a);
    printArr(10,a);
    test(v,10,10);
    printArr(10,a);
}

void test(void* v, int n, int val){
    int* s = (int*)v;
    for(int i = 0; i < n; i++){
        *(s + i) = val;
    }
}