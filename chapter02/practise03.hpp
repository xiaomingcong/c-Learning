//
// Created by 萧铭聪 on 2022/6/24.
//

#include "practise03.h"
#include <iostream>
#include <fstream>

using namespace std;
void practise03(){
    cout << "practise03" << endl;
    ifstream in("/Users/xiaomingcong/CLionProjects/learning/chapter02/practise02.hpp");
    string s;
    while(getline(in,s)){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 32){
                cout << endl;
            }else{
                cout << s[i];
            }
        }

    }
}