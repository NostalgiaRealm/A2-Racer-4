
/* ==== FUN_004dd110 @ 004dd110 ==== 
 * signature: undefined __fastcall FUN_004dd110(int param_1)
 * body: 004dd110-004dd13b
 */

void __fastcall FUN_004dd110(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != *(int *)(param_1 + 0x30)) {
    do {
      FUN_004e13b0(*(int *)(iVar1 + -4));
      iVar1 = iVar1 + -4;
    } while (iVar1 != *(int *)(param_1 + 0x30));
  }
  return;
}


