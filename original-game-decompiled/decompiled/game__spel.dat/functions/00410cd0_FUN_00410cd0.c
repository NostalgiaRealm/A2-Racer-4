
/* ==== FUN_00410cd0 @ 00410cd0 ==== 
 * signature: int __fastcall FUN_00410cd0(int param_1)
 * body: 00410cd0-00410cf5
 */

int __fastcall FUN_00410cd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) / 0x18;
}


