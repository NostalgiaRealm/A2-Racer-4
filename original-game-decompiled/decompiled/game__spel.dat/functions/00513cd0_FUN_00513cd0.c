
/* ==== FUN_00513cd0 @ 00513cd0 ==== 
 * signature: undefined __fastcall FUN_00513cd0(undefined4 * param_1)
 * body: 00513cd0-00513d2b
 */

void __fastcall FUN_00513cd0(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  for (iVar2 = *(int *)(param_1[2] + 4); -1 < iVar2; iVar2 = iVar2 + -1) {
    pvVar1 = *(LPVOID *)(*(int *)(param_1[2] + 0xc) + 4 + iVar2 * 8);
    if (pvVar1 != (LPVOID)0x0) {
      FUN_0054b339(pvVar1);
    }
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))(1);
  }
  pvVar1 = (LPVOID)*param_1;
  param_1[2] = 0;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_00520fc0((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  *param_1 = 0;
  return;
}


