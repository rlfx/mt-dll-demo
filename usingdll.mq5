//+------------------------------------------------------------------+
//|                                                     usingdll.mq5 |
//|                                    Copyright 2017, fatfingererr. |
//|                                fatfingererr [at] gmail [dot] com |
//+------------------------------------------------------------------+
#property copyright "Copyright 2017, fatfingererr."
#property link      "fatfingererr.github.io"
#property version   "1.00"

#include <usingdll.mqh>

//+------------------------------------------------------------------+
//| Expert initialization function                                   |
//+------------------------------------------------------------------+
int OnInit()
  {  
   int base  = 2 ;
   int power = 1 ;
   Print(base,"^",power,"=",myPower(base,power));power++;
   Print(base,"^",power,"=",myPower(base,power));power++;
   Print(base,"^",power,"=",myPower(base,power));power++;
   Print(base,"^",power,"=",myPower(base,power));power++;
   Print(base,"^",power,"=",myPower(base,power));power++;
   Print(base,"^",power,"=",myPower(base,power));power++;
   Print(base,"^",power,"=",myPower(base,power));power++;
   Print(base,"^",power,"=",myPower(base,power));power++;
   Print(base,"^",power,"=",myPower(base,power));power++;
   return(INIT_SUCCEEDED);
  }

//+------------------------------------------------------------------+
//| Expert deinitialization function                                 |
//+------------------------------------------------------------------+
void OnDeinit(const int reason)
  {

   
  }

//+------------------------------------------------------------------+
//| Expert tick function                                             |
//+------------------------------------------------------------------+
void OnTick()
  {

   
  }
//+------------------------------------------------------------------+
