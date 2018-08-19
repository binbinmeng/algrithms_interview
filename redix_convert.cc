//
// Created by binbin on 18-8-19.
//

#include "string"
#include "vector"
#include "iostream"
using namespace std;

void redix_convert(string in_string, int src_redix, int dst_redix)
{
     long in_data = atoi(in_string.c_str());

     vector<int> r_num;

     while(in_data/dst_redix > 0)
     {
           r_num.push_back(in_data%dst_redix);

           in_data = in_data/dst_redix;
     }

     r_num.push_back(in_data%dst_redix);

     for(int k=0; k<r_num.size(); ++k)
     {
         std::cout<<r_num[k]<<std::endl;
     }
}

int main()
{
    redix_convert("123",10, 10);
}