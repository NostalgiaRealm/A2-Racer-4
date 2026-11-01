
/* ==== TDaviAnimation.vmt_07c @ 0045bfa8 ==== 
 * signature: undefined TDaviAnimation.vmt_07c(void)
 * body: 0045bfa8-0045c062
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_07c(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_120;
  code *pcStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  puStack_118 = &stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  pcStack_11c = thunk_FUN_004036bc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  if (*(uint *)(param_1[10] + 4) <= param_2) {
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(&iStack_c,abStack_10c);
    pcStack_130 = "Frame index out of bounds.";
    FUN_00403f9c(&iStack_8,4);
    FUN_00403c40(iStack_8);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  if (((param_1[0x12] == 0) || (*(char *)(param_1[0x12] + 0x24) == '\0')) &&
     (param_2 != param_1[0xb])) {
    param_1[0xb] = param_2;
    (**(code **)(*param_1 + 100))(param_1,param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  *in_FS_OFFSET = pcStack_130;
  FUN_00403c80(&iStack_c,2);
  return;
}


