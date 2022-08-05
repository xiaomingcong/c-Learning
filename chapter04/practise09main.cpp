//
// Created by 萧铭聪 on 2022/7/12.
// 可以发生重载
//

#include <stdio.h>
#include "./practise09.cpp"

void print(float f){
    printf("%f\n",f);
}

int main(){
    print(2);
    print(4.2f);
}