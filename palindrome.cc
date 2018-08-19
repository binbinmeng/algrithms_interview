//
// Created by binbin on 18-8-19.
//
#include "string"
#include "iostream"
using namespace std;

bool palindrome(const string &in_string)
{
     int start = 0;
     int end = in_string.length()-1;

     while(start<=end)
     {
         if(in_string[start] == in_string[end])
         {
             start++;
             end--;
         } else{
             return false;
         }
     }

    return true;
}

int main()
{
    std::cout<<palindrome("1321")<<std::endl;
}