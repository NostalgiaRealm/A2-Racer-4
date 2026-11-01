
/* ==== FUN_0041b554 @ 0041b554 ==== 
 * signature: undefined __register FUN_0041b554(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 0041b554-0041b5ca;0041b5e2-0041b616
 */

void FUN_0041b554(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41b570;
  iVar1 = FUN_0041b290(DAT_004aa5d8,(short)param_2);
  if (iVar1 == 0) {
    puStack_1c = (undefined1 *)0x41b580;
    FUN_00419798((undefined4 *)PTR_PTR_004ab8c0);
  }
  puStack_1c = (undefined1 *)0x41b587;
  piVar2 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
  pcStack_20 = thunk_FUN_00403408;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar2[5] = (int)param_1;
  puStack_1c = &stack0xfffffffc;
  iVar1 = FUN_00403190(param_1,CONCAT22(extraout_var,0xfffc));
  piVar2[4] = iVar1;
  (**(code **)(*piVar2 + 0x58))(piVar2,param_2,param_3);
  *in_FS_OFFSET = param_4;
  pcStack_20 = (code *)0x41b5ea;
  FUN_00402f9c((int *)param_1[1]);
  param_1[1] = (int)piVar2;
  piVar2[3] = (int)param_1;
  pcStack_20 = (code *)0x41b5fe;
  iVar1 = FUN_00403190(param_1,CONCAT22(extraout_var_00,0xfffd));
  piVar2[2] = iVar1;
  pcStack_20 = (code *)0x41b60e;
  FUN_00403178(param_1,param_1,extraout_ECX);
  return;
}


