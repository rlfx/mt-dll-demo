/**
***********************************************************************
* 本檔案僅做教學用途
* 若要在生產環境中使用請再三留意
* 本檔案以 GPL 3.0 釋出
***********************************************************************
*/

/* 如果你編完的 dll 想在 c++ 中測試的話，請參考如下
 *
 * 編譯指令請參考 Makefile
 *
 */

#include <iostream>  // 為了顯示測試結果
#include <windows.h> // 因為你要呼叫 dll

typedef double (*fpMyPower)(int base, int pow);

int main(void){

  /* 先讀取 DLL 看有沒有問題
   *******************************************************************/
  HINSTANCE handle = LoadLibrary(".\\dllmain.dll");
  if(handle == NULL)
    {
      printf("Load Dll Error\n");
      system("pause");
    }

  /* 讀取函數指針，得在 testdll.hpp 中定義
  *******************************************************************/
  fpMyPower fcMyPower = (fpMyPower)GetProcAddress(handle,"myPower");
  if(fcMyPower == NULL)
    {
      printf("Load Function Error\n");
      system("pause");
    }


  /* 測試函數式否正確
   *******************************************************************/
  int base = 2 ;
  int pow  = 5 ;
  int result = fcMyPower(base,pow);
  std::cout << "2^5=" << result << std::endl;

  system("pause");
  return 0;
}
