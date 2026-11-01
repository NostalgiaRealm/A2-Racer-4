
/* ==== FUN_00422708 @ 00422708 ==== 
 * signature: undefined __register FUN_00422708(int param_1, char param_2, undefined4 param_3)
 * body: 00422708-00422764
 */

void FUN_00422708(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_00447774 == (int *)0x0) {
      DAT_00447774 = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
    }
    iVar1 = FUN_0040f080((int)DAT_00447774,param_1);
    if (param_2 == '\0') {
      if (iVar1 != -1) {
        FUN_0040ef14(DAT_00447774,iVar1);
      }
    }
    else if (iVar1 == -1) {
      FUN_0040eec8(DAT_00447774,param_1);
    }
  }
  return;
}


