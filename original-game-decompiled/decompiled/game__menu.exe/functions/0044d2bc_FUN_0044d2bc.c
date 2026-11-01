
/* ==== FUN_0044d2bc @ 0044d2bc ==== 
 * signature: undefined __register FUN_0044d2bc(int param_1, int param_2, undefined4 * param_3)
 * body: 0044d2bc-0044d2f9;0044d310-0044d338
 */

void FUN_0044d2bc(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x44d2cf;
  piVar1 = (int *)(**(code **)(param_2 + -0xc))();
  *param_3 = piVar1;
  pcStack_1c = thunk_FUN_00403408;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xffffffff,param_1);
  *in_FS_OFFSET = uStack_20;
  if (*(int *)(param_1 + 0x38) == 0) {
    puStack_18 = (undefined1 *)0x44d323;
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_vmt_000_00442fd4);
    if ((char)uVar2 != '\0') {
      puStack_18 = (undefined1 *)0x44d330;
      FUN_004349bc(piVar1);
      *(int **)(param_1 + 0x38) = piVar1;
    }
  }
  return;
}


