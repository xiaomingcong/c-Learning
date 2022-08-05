//
// Created by 萧铭聪 on 2022/6/24.
//

#include "practise03.h"
#include <iostream>
#include <fstream>

using namespace std;
void practise07(){
    cout << "practise03" << endl;
    ifstream in("/Users/xiaomingcong/CLionProjects/learning/chapter02/practise02.hpp");
    string s;
    string a;
    while(getline(in,s)){
        cin >> a;
//        cout << a << endl;gf
        cout << s << endl;
    }
}