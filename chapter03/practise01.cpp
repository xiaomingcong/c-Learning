//
// Created by 萧铭聪 on 2022/6/24.
//

#include <cstdarg>
#include "practise01.h"

void FN1(){

}
int FN2(...){
    va_list args;
    va_start(args,4);
    for(int i = 0; i < 5; i++)
        std::cout<<va_arg(args, int)<<", ";
    va_end(args);
    std::cout<<std::endl;
    return 1;
}
float FN3(){
    return 1.1f;
}
char FN4(){
    return 'a';
}