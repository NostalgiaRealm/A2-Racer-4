
/* ==== FUN_00440fe8 @ 00440fe8 ==== 
 * signature: undefined __register FUN_00440fe8(int param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 * param_5, int param_6)
 * body: 00440fe8-0044104a
 */

void FUN_00440fe8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
                 int param_6)

{
  int iVar1;
  
  for (; -1 < param_6; param_6 = param_6 + -1) {
  }
  FUN_00440a7c(param_1);
  if (-1 < param_4) {
    iVar1 = param_4 + 1;
    do {
      *param_5 = 0;
      param_5 = param_5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0043cce4(FUN_00440f9c,*(int *)(*(int *)(param_1 + 0x28) + 0x5c),*(int *)(param_1 + 0x28));
  return;
}


