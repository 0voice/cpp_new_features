#include <iostream>

int end_fun(int& a){
    return a;
}

template<typename T,typename... Args>
int end_fun(T& arg,Args... args){
    return arg + end_fun(args...);
}


int main(int argc,char *argv[]){

    char a = 'a';
    int b = 2;
    int c = 3;
    int res = end_fun(a,b,c);
    std::cout<<"Res: "<<res<<std::endl;
}
