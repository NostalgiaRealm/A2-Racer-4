
/* ==== FUN_0041b4a4 @ 0041b4a4 ==== 
 * signature: undefined __register FUN_0041b4a4(int * param_1, undefined4 * param_2)
 * body: 0041b4a4-0041b533;0041b54b-0041b550
 */

void FUN_0041b4a4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  int *piStack_18;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    piStack_18 = (int *)0x41b4bf;
    iVar1 = FUN_00402ee0(param_2);
    piStack_18 = (int *)0x41b4c4;
    local_8 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
    piStack_18 = (int *)0x41b4d1;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    local_8[3] = (int)param_1;
    pcStack_1c = (code *)0x41b4e3;
    piStack_18 = local_8;
    iVar1 = FUN_00403190(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_18[2] = iVar1;
    local_8[5] = (int)param_1;
    pcStack_1c = (code *)0x41b4fb;
    piStack_18 = local_8;
    iVar1 = FUN_00403190(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),0xfffc));
    piStack_18[4] = iVar1;
  }
  pcStack_1c = thunk_FUN_00403408;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piStack_18 = (int *)&stack0xfffffffc;
  FUN_00402f9c((int *)param_1[1]);
  param_1[1] = (int)local_8;
  FUN_00403178(param_1,param_1,extraout_ECX);
  *in_FS_OFFSET = uStack_20;
  return;
}


