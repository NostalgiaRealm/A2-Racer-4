
/* ==== TDataModule.Destroy @ 0044aa5c ==== 
 * signature: undefined TDataModule.Destroy(void)
 * body: 0044aa5c-0044aad5
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDataModule_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte bStack_9;
  int *piStack_8;
  
  pcStack_10 = (code *)0x44aa67;
  piStack_8 = FUN_004032fc(param_1,param_2);
  bStack_9 = extraout_DL;
  if ((*(byte *)(piStack_8 + 8) & 8) == 0) {
    pcStack_10 = (code *)0x44aa82;
    FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  }
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  if ((char)piStack_8[0x12] != '\0') {
    pcStack_10 = (code *)&stack0xfffffffc;
    (**(code **)(*piStack_8 + 0x34))();
  }
  FUN_0044b27c(DAT_004ac7d8,(int)piStack_8);
  TComponent_Destroy(piStack_8,bStack_9 & 0xfc);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0044aadd;
  pcStack_14 = (code *)0x44aad5;
  FUN_0040c944(*(int *)PTR_DAT_004ab9ec);
  return;
}


