//
// Created by 萧铭聪 on 2022/6/27.
//

#include "practise16.h"



void practise16(){
    cout << sizeof(Packed) << endl;
    Packed x;
    x.i1 = 1;
    cout << x.i1 << endl;
    x.i2 = 2;
    cout << x.i1 << endl;
    cout << x.i2 << endl;
    x.d1 = 3.14;
    cout << x.i1 << endl;
    cout << x.i2 << endl;
    cout << x.d1 << endl;
    cout << sizeof(Packed) << endl;

}