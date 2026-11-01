
/* ==== FUN_004192fc @ 004192fc ==== 
 * signature: undefined __register FUN_004192fc(int * param_1, undefined4 * param_2)
 * body: 004192fc-0041938b;004193a3-004193a8
 */

void FUN_004192fc(int *param_1,undefined4 *param_2)

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
    piStack_18 = (int *)0x419317;
    iVar1 = FUN_00402c5c(param_2);
    piStack_18 = (int *)0x41931c;
    local_8 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
    piStack_18 = (int *)0x419329;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    local_8[3] = (int)param_1;
    pcStack_1c = (code *)0x41933b;
    piStack_18 = local_8;
    iVar1 = FUN_00402f08(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_18[2] = iVar1;
    local_8[5] = (int)param_1;
    pcStack_1c = (code *)0x419353;
    piStack_18 = local_8;
    iVar1 = FUN_00402f08(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),0xfffc));
    piStack_18[4] = iVar1;
  }
  pcStack_1c = thunk_FUN_00403180;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piStack_18 = (int *)&stack0xfffffffc;
  FUN_00402d14((int *)param_1[1]);
  param_1[1] = (int)local_8;
  FUN_00402ef0(param_1,param_1,extraout_ECX);
  *in_FS_OFFSET = uStack_20;
  return;
}


