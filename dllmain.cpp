/**
***********************************************************************
* 本檔案僅做教學用途
* 若要在生產環境中使用請再三留意
* 本檔案以 GPL 3.0 釋出
***********************************************************************
*/

#include "dllmain.hpp"

double myPower(int base, int power){

  double ret = 1 ;
  for(int i = 0 ; i < power ; i++ ){
    ret *= base ;
  }

  return ret;
}
