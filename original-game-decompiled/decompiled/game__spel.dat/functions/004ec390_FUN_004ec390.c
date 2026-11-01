
/* ==== FUN_004ec390 @ 004ec390 ==== 
 * signature: int __fastcall FUN_004ec390(int param_1)
 * body: 004ec390-004ec3b7
 */

int __fastcall FUN_004ec390(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) / 0x3c;
}


