
/* ==== FUN_00490380 @ 00490380 ==== 
 * signature: int __fastcall FUN_00490380(int param_1)
 * body: 00490380-004903a7
 */

int __fastcall FUN_00490380(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) / 0x78;
}


