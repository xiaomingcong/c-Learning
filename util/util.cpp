//
// Created by 萧铭聪 on 2022/6/24.
//

#include "util.h"

void print(string str){
    cout << str << endl;
}

//输出一维数组
void printArr(int n,int* arr){
    for(int i = 0; i < n; i++){
        if(i % 10 == 0)
            cout << endl;
        cout << *(arr + i) << "\t";
    }
}
void printArr(int n,double* arr){
    for(int i = 0; i < n; i++){
        if(i % 10 == 0)
            cout << endl;
        cout << *(arr + i) << "\t";
    }
}