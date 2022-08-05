//
// Created by 萧铭聪 on 2022/7/12.
//
#include <iostream>
using namespace std;

#define LEARNING_PRACTISE11_H
#ifdef LEARNING_PRACTISE11_H
void print(){
    cout << "c1" << endl;
}
#endif

#ifndef LEARNING_PRACTISE11_H

#define LEARNING_PRACTISE11_H
void print(){
    cout << "c2" << endl;
}
#endif //LEARNING_PRACTISE11_H
