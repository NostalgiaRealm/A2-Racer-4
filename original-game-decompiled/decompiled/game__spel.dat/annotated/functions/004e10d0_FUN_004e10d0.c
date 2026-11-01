
/* ==== FUN_004e10d0 @ 004e10d0 ==== 
 * signature: undefined __fastcall FUN_004e10d0(int * param_1)
 * body: 004e10d0-004e1106
 */

void __fastcall FUN_004e10d0(int *param_1)

{
  char cVar1;
  
  if (((char)param_1[10] == '\0') && (*(char *)((int)param_1 + 0x29) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x3c))();
    if (cVar1 == '\0') {
      FUN_004e6ca0(&DAT_0074b8d0,param_1 + 3,(char *)0xfa4);
    }
  }
  return;
}


