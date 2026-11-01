
/* ==== FUN_00410d80 @ 00410d80 ==== 
 * signature: int __fastcall FUN_00410d80(int param_1)
 * body: 00410d80-00410da4
 */

int __fastcall FUN_00410d80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) / 0xc;
}


