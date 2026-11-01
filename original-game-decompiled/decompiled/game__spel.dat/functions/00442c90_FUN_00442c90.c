
/* ==== FUN_00442c90 @ 00442c90 ==== 
 * signature: int __fastcall FUN_00442c90(int param_1)
 * body: 00442c90-00442cb7
 */

int __fastcall FUN_00442c90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) / 0x8c;
}


