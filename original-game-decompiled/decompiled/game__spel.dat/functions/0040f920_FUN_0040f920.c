
/* ==== FUN_0040f920 @ 0040f920 ==== 
 * signature: undefined __fastcall FUN_0040f920(undefined4 * param_1)
 * body: 0040f920-0040f978
 */

void __fastcall FUN_0040f920(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = (LPVOID)param_1[1];
  *param_1 = &PTR_FUN_005763e8;
  if (pvVar1 == (LPVOID)0x0) {
    param_1[1] = 0;
    return;
  }
  iVar2 = *(int *)((int)pvVar1 + 8);
  for (iVar3 = *(int *)((int)pvVar1 + 4); iVar3 != iVar2; iVar3 = iVar3 + 0x30) {
    FUN_00416ad0(iVar3);
  }
  FUN_0054b339(*(LPVOID *)((int)pvVar1 + 4));
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0;
  FUN_0054b339(pvVar1);
  param_1[1] = 0;
  return;
}


