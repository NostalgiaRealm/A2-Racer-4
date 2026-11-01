
/* ==== FUN_0040a6fc @ 0040a6fc ==== 
 * signature: int __register FUN_0040a6fc(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0040a6fc-0040a756
 */

int FUN_0040a6fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  WORD WVar1;
  uint uVar2;
  
  if (DAT_004ac5b8 == 0x12) {
    if (param_1 < 100) {
      WVar1 = FUN_004098a0();
      uVar2 = (int)*(uint *)(param_4 + -4) >> 0x1f;
      param_1 = param_1 + ((int)((uint)WVar1 + ((*(uint *)(param_4 + -4) ^ uVar2) - uVar2)) / 100) *
                          100;
    }
    if (0 < *(int *)(param_4 + -4)) {
      *(int *)(param_4 + -4) = -*(int *)(param_4 + -4);
    }
  }
  else {
    *(int *)(param_4 + -4) = *(int *)(param_4 + -4) + -1;
  }
  return *(int *)(param_4 + -4) + param_1;
}


