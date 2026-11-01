
/* ==== FUN_00494740 @ 00494740 ==== 
 * signature: undefined __fastcall FUN_00494740(undefined4 * param_1)
 * body: 00494740-004947e3
 */

void __fastcall FUN_00494740(undefined4 *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = (LPVOID)param_1[0xd];
  param_1[0xc] = &PTR_FUN_00576b04;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[0xd] = 0;
  pvVar1 = (LPVOID)param_1[10];
  param_1[9] = &PTR_FUN_00576e18;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[10] = 0;
  pvVar1 = (LPVOID)param_1[8];
  param_1[7] = &PTR_FUN_00577058;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    FUN_0054b339(pvVar1);
  }
  param_1[8] = 0;
  FUN_004925f0(param_1);
  return;
}


