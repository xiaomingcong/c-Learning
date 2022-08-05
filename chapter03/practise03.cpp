//
// Created by 萧铭聪 on 2022/6/27.
//

#include "practise03.h"
#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

void practise03(){
    ifstream in("/Users/xiaomingcong/CLionProjects/learning/file/c03t03.txt");
    vector<string> v;
    string str;
    while(getline(in,str)){
        v.push_back(str);
    }
    int condition;
    cin >> condition;
    switch (condition) {
        case 0:
            cout << v.at(0) << endl;
            break;
        case 1:
            cout << v.at(1) << endl;
            break;
        case 9:
            cout << "9" << endl;
            break;
        default:
            cout << "default" << endl;

    }

}