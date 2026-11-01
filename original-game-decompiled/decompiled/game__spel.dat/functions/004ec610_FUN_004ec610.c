
/* ==== FUN_004ec610 @ 004ec610 ==== 
 * signature: undefined __fastcall FUN_004ec610(undefined4 * param_1)
 * body: 004ec610-004ec64b
 */

void __fastcall FUN_004ec610(undefined4 *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = (LPVOID)param_1[1];
  *param_1 = &PTR_FUN_005781c0;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[1] = 0;
  return;
}


