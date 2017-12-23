/**
 ***********************************************************************
 * 本檔案僅做教學用途
 * 若要在生產環境中使用請再三留意
 * 本檔案以 GPL 3.0 釋出
 ***********************************************************************
 */


/* 首先避免重複引用 */
#ifndef DLLMAIN_H_
#define DLLMAIN_H_


/**
 ***********************************************************************
 * 與 MetaTrader 的接口，也是標準的 DLL 介面定義
 *
 * 這邊定義的 BUILD_DLL 可以更換成任何的關鍵字
 *
 * 這邊定義的 DLLMAIN_API 也可以換成任何其他字
 *
 * 這裡的 API 是指在 dll-side 與 Client-side 之間的溝通橋樑
 *
 * 在編譯時請透過 -DBUILD_DLL 方式定義關鍵字來定義匯出介面
 *
 * 我使用 Makefile 所以你可以看 Makefile 知道完整的編譯指令
 *
 */
#ifdef BUILD_DLL
#define DLLMAIN_API __declspec(dllexport)
#else
#define DLLMAIN_API __declspec(dllimport)
#endif


/**
 ***********************************************************************
 *
 * 定義你打算要匯出的函數
 *
 * extern C 不一定要加，如果你都用全部用 C++ 寫的話
 *
 * 保險起見如果你未來會和 C 的 code 一起編譯，還是加一下吧
 *
 * 在這邊我們定義一個自訂的 Power Function
 *
 */
extern "C" {
  DLLMAIN_API double myPower(int base, int power);
}

#endif
