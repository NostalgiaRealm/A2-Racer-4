
/* ==== FUN_00416860 @ 00416860 ==== 
 * signature: int __fastcall FUN_00416860(int param_1)
 * body: 00416860-00416875
 */

int __fastcall FUN_00416860(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return *(int *)(*(int *)(param_1 + 4) + 8) - iVar1 >> 5;
}


