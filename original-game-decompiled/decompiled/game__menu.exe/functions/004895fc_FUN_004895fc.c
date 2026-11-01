
/* ==== FUN_004895fc @ 004895fc ==== 
 * signature: undefined FUN_004895fc(void)
 * body: 004895fc-004896ca
 */

void FUN_004895fc(int *param_1,char param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_134;
  undefined *puStackY_130;
  undefined1 *puStackY_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  if (param_2 != '\0') {
    puStackY_12c = (undefined1 *)0x48961c;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed8,in_stack_fffffedc);
    param_3 = extraout_ECX;
  }
  puStackY_12c = (undefined1 *)0x48962a;
  FUN_00404090((int)param_4);
  puStackY_130 = &UNK_004896cb;
  uStackY_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_134;
  puStackY_12c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  if (param_3 == 0) {
    FUN_00403c40("aResourceManager  =  nil");
  }
  param_1[1] = param_3;
  FUN_00403cb0(param_1 + 2,param_4);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&iStack_c,2);
  FUN_00403c5c((int *)&param_4);
  return;
}


