
/* ==== FUN_0042c648 @ 0042c648 ==== 
 * signature: undefined __register FUN_0042c648(int param_1, char param_2, undefined4 param_3)
 * body: 0042c648-0042c6a4
 */

void FUN_0042c648(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_004ac784 == (int *)0x0) {
      DAT_004ac784 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
    }
    iVar1 = FUN_0041030c((int)DAT_004ac784,param_1);
    if (param_2 == '\0') {
      if (iVar1 != -1) {
        FUN_00410150(DAT_004ac784,iVar1);
      }
    }
    else if (iVar1 == -1) {
      FUN_00410104(DAT_004ac784,param_1);
    }
  }
  return;
}


