
/* ==== TMetafile.vmt_04c @ 00419d34 ==== 
 * signature: undefined TMetafile.vmt_04c(void)
 * body: 00419d34-00419da1
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
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = param_1[9];
  FUN_00407f60(param_2,&puStack_c);
  FUN_0040b420(puStack_c,(int *)&puStack_8);
  FUN_00403d48(puStack_8,(uint *)&DAT_00419db8);
  if ((bool)uVar2) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  TGraphic_vmt_04c(param_1,param_2);
  *(char *)(param_1 + 9) = (char)iVar1;
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00419da9;
  pcStack_20 = (code *)0x419da1;
  FUN_004039dc((int *)&puStack_c,2);
  return;
}


