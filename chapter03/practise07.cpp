//
// Created by 萧铭聪 on 2022/6/27.
//

#include "practise07.h"

void practise07(){
    string s1 = "hello1";
    string* s2 = &s1;
    changeStr1(s1);
    cout << s1 << endl;
    changeStr2(s2);
    cout << s1 << endl;
}

void changeStr1(string& str) {
    str = str + "&";

}

void changeStr2(string* str){
    *str = *str + "*";
}
