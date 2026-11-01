
/* ==== FUN_00487478 @ 00487478 ==== 
 * signature: undefined __register FUN_00487478(uint param_1, undefined4 * param_2)
 * body: 00487478-004874c8
 */

void FUN_00487478(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if (9 < param_1) {
    uVar1 = FUN_00403c40("Assertion failure");
    thunk_FUN_00402808(uVar1);
  }
  uVar1 = (uint)((longlong)(int)param_1 * 3);
  if ((longlong)(int)uVar1 != (longlong)(int)param_1 * 3) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  *param_2 = *(undefined4 *)(&DAT_004ab4d8 + uVar1 * 2);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(&DAT_004ab4dc + uVar1 * 2);
  return;
}


