
/* ==== TDaviAVILoader.vmt_018 @ 004574c4 ==== 
 * signature: int * __register TDaviAVILoader.vmt_018(int * param_1, char param_2, undefined4 * param_3)
 * body: 004574c4-00457523
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TDaviAVILoader_vmt_018(int *param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  TDaviAnimationLoader_vmt_018(param_1,'\0',param_3);
  piVar1 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX_00);
  param_1[0x2a] = (int)piVar1;
  FUN_00456634(piVar1,extraout_EDX,extraout_ECX_01);
  (**(code **)(*param_1 + 0xc))();
  if (cVar2 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


