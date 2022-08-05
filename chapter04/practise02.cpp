//
// Created by 萧铭聪 on 2022/7/12.
//

#include <iostream>
using namespace std;

struct dog {
    int legs;
    void call();
    void initialize(int legs);
};

void dog::call() {
    cout << "噢噢噢" << endl;
    cout << legs << " legs "<< endl;
}

void dog::initialize(int legs) {
    this->legs = legs;
}

int main(){
    dog d1;
    d1.initialize(4);
    d1.call();
}
