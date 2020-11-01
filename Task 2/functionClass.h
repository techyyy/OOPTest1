#ifndef FUNCTION_CLASS_H
#define FUNCTION_CLASS_H

#include<iostream>
#include<string> 
#include<cmath>
#include<utility>
#include<vector>

#include"functionGlobals.h"
#include"functionUtilities.h


class Function{
    public:
      template<typename T>
      int calculate(T a)
      {
          if constexpr(is_same_type<T, int>::result)
          {

            if(a >= 0)
            {
              int res1 = factorial(a);
              return res1 % 129;

            } else if(a < 0){
              int res1 = pow(a,3);
              return res1 % 229;
            } 

          } else if constexpr(is_same_type<T, std::string>::result) {
            return countVowels(a);

          } else if constexpr(is_same_type<T, double>::result) {
            int res2 = (int)exp(1/sin(a));
            return res2 % 329;

          } else if constexpr(is_same_type<T, std::pair<int,int>>::result) {
            int res3 = pow(a.first, a.second);
            return res3 % 529;

          } else if constexpr(is_same_type<T, std::vector<int>>::result) {
            int res4 = 0;
            for(int i = 1; i < a.size(); i++) {
              res4 += a[i]*a[i-1];
            }
            return res4%729;

          } else {
            return 1799;
          }

      }


};

#endif


