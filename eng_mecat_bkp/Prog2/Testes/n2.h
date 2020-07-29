#ifndef N1_H_INCLUDED
#define N1_H_INCLUDED

#endif // N1_H_INCLUDED
#include<iostream>
using namespace std;
namespace n2{
    int op(int a,int b){
        return a/b;
    }
    namespace n3{
        int op(int a,int b){
            return a%b;
        }
    }
}
