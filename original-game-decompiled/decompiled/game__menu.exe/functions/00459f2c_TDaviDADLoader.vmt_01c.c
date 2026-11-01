
/* ==== TDaviDADLoader.vmt_01c @ 00459f2c ==== 
 * signature: undefined TDaviDADLoader.vmt_01c(void)
 * body: 00459f2c-00459ff0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviDADLoader_vmt_01c(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  puStack_11c = &stack0xfffffffc;
  uVar2 = 0;
  iStack_8 = 0;
  iStack_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  uVar3 = param_2;
  puVar1 = &stack0xfffffffc;
  if (*(uint *)(param_1[2] + 4) <= param_2) {
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(&iStack_c,abStack_10c);
    pcStack_134 = "DAD Frame index error";
    FUN_00403f9c(&iStack_8,4);
    FUN_00403c40(iStack_8);
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  FUN_00456634((int *)param_1[4],uVar3,uVar2);
  if (*(int *)(param_1[2] + 4) != 0) {
    if ((char)param_1[6] == '\0') {
      FUN_00459908((int)param_1,param_2);
    }
    else {
      FUN_004597e4((int)param_1,param_2);
    }
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403c80(&iStack_c,2);
  return;
}


