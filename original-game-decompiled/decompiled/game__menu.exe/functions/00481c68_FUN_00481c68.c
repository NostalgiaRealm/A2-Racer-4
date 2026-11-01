
/* ==== FUN_00481c68 @ 00481c68 ==== 
 * signature: undefined __register FUN_00481c68(int * param_1, char param_2, int * param_3)
 * body: 00481c68-00481cc0
 */

void FUN_00481c68(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  code *pcStackY_28;
  code *pcStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  int *local_8;
  
  if (param_2 != '\0') {
    pcStackY_24 = (code *)0x481c7a;
    local_8 = param_3;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  pcStackY_24 = (code *)0x481c89;
  local_8 = param_3;
  FUN_004058c0(param_3);
  pcStackY_28 = thunk_FUN_004036bc;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  pcStackY_24 = (code *)&stack0xfffffffc;
  FUN_00402f6c(param_1,'\0',extraout_ECX_00);
  FUN_00405878(param_1 + 1,local_8);
  *in_FS_OFFSET = uStackY_2c;
  pcStackY_24 = FUN_00481cc8;
  pcStackY_28 = (code *)0x481cc0;
  FUN_00405860((int *)&local_8);
  return;
}


