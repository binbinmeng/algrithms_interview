//
// Created by binbin on 18-8-19.
//
#include "iostream"
using namespace std;

int greatest_common_divisor(int a, int b){

     while(b!=0)
     {

         int temp = a;

         a = b;

         b = temp%b;
     }

     return a;
}

int main()
{
    std::cout<<greatest_common_divisor(30,21)<<std::endl;

    return 0;
}