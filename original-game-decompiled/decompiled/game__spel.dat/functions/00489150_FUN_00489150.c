
/* ==== FUN_00489150 @ 00489150 ==== 
 * signature: undefined __fastcall FUN_00489150(undefined4 * param_1)
 * body: 00489150-0048919c
 */

void __fastcall FUN_00489150(undefined4 *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = (LPVOID)param_1[0x24];
  param_1[0x23] = &PTR_FUN_00576e98;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[0x24] = 0;
  FUN_00483f80(param_1);
  return;
}


