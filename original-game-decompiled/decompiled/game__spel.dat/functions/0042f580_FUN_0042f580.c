
/* ==== FUN_0042f580 @ 0042f580 ==== 
 * signature: int __fastcall FUN_0042f580(int param_1)
 * body: 0042f580-0042f595
 */

int __fastcall FUN_0042f580(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return *(int *)(*(int *)(param_1 + 4) + 8) - iVar1 >> 4;
}


