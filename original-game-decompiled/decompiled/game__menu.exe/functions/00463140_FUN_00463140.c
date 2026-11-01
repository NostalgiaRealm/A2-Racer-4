
/* ==== FUN_00463140 @ 00463140 ==== 
 * signature: undefined FUN_00463140(void)
 * body: 00463140-0046324b
 */

void FUN_00463140(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_13c;
  undefined *puStackY_138;
  undefined1 *puStackY_134;
  undefined4 in_stack_fffffed0;
  undefined4 in_stack_fffffed4;
  undefined *puStack_118;
  undefined *puStack_114;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = (undefined *)0x0;
  puStack_118 = (undefined *)0x0;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  if (param_2 != '\0') {
    puStackY_134 = (undefined1 *)0x46316b;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed0,in_stack_fffffed4);
    param_3 = extraout_ECX;
  }
  puStackY_134 = (undefined1 *)0x46317a;
  puStack_8 = param_3;
  FUN_00404090((int)param_3);
  puStackY_138 = &UNK_0046324c;
  uStackY_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_13c;
  puStackY_134 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar1 = puStack_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_00402f6c(param_1,'\0',extraout_ECX_00);
  FUN_00403f28((int *)&puStack_114,puStack_8,(undefined4 *)&UNK_00463298);
  FUN_004040a0(puStack_114);
  FUN_00403f28((int *)&puStack_118,puStack_8,(undefined4 *)&UNK_004632a8);
  FUN_004040a0(puStack_118);
  xvga_init_fileio();
  *in_FS_OFFSET = "Create";
  FUN_00403c80((int *)&puStack_118,2);
  FUN_00403c80(&iStack_10,3);
  return;
}


