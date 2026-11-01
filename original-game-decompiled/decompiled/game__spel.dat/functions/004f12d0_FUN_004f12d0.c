
/* ==== FUN_004f12d0 @ 004f12d0 ==== 
 * signature: int __fastcall FUN_004f12d0(int param_1)
 * body: 004f12d0-004f12f5
 */

int __fastcall FUN_004f12d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) / 0x28;
}


