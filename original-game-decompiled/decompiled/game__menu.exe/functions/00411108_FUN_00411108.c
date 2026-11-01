
/* ==== FUN_00411108 @ 00411108 ==== 
 * signature: undefined __register FUN_00411108(int * param_1, int * param_2)
 * body: 00411108-0041118d
 */

void FUN_00411108(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  FUN_00405860(param_2);
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)FUN_00403178(param_1,extraout_EDX,extraout_ECX);
    if (piVar1 == (int *)0x0) {
      uVar2 = FUN_00403114(param_1,(int)&PTR_TPersistent_vmt_000_0040f548);
      if (((char)uVar2 != '\0') && ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
        FUN_00405860(param_2);
        (**(code **)(*param_1 + 0x28))();
      }
    }
    else {
      uVar2 = FUN_00403114(param_1,(int)&PTR_TPersistent_vmt_000_0040f548);
      if (((char)uVar2 == '\0') || ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
        piVar3 = FUN_00405860(param_2);
        FUN_00411108(piVar1,piVar3);
      }
    }
  }
  return;
}


