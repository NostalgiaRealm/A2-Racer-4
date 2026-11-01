
/* ==== FUN_00513770 @ 00513770 ==== 
 * signature: undefined __fastcall FUN_00513770(int param_1)
 * body: 00513770-005137c2
 */

void __fastcall FUN_00513770(int param_1)

{
  int iVar1;
  
  FUN_0054b339(*(LPVOID *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0054b339(*(LPVOID *)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar1 != 0) {
    FUN_005586c5(iVar1,0x30,*(int *)(iVar1 + -4),thunk_FUN_005137f0);
    FUN_0054b339((LPVOID)(iVar1 + -4));
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


