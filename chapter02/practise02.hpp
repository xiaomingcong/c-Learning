//
// Created by 萧铭聪 on 2022/6/24.
//
#include "../util/util.cpp"
#define PI 3.1415926

void practise02(){
    std::cout << "practise02" << std::endl;
    print("press radius:");
    double r;
    std::cin >> r;
    double area;
    area = PI * r * r;
    print("area = " + std::to_string(area));
}