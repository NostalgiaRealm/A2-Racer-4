
/* ==== TMetafile.vmt_04c @ 0041c4ac ==== 
 * signature: undefined TMetafile.vmt_04c(void)
 * body: 0041c4ac-0041c519
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMetafile_vmt_04c(int *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined *puStack_c;
  uint *puStack_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_c = (undefined *)0x0;
  uVar2 = 1;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = param_1[9];
  FUN_00408a68(param_2,(int *)&puStack_c);
  FUN_0040c110(puStack_c,(int *)&puStack_8);
  FUN_00403fec(puStack_8,(uint *)&DAT_0041c530);
  if ((bool)uVar2) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  TGraphic_vmt_04c(param_1,param_2);
  *(char *)(param_1 + 9) = (char)iVar1;
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0041c521;
  pcStack_20 = (code *)0x41c519;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


