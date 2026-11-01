
/* ==== TGDIForm.Destroy @ 0046b564 ==== 
 * signature: undefined TGDIForm.Destroy(void)
 * body: 0046b564-0046b5be
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TGDIForm_Destroy(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  byte bStack_9;
  int *piStack_8;
  
  pcStack_10 = (code *)0x46b56f;
  piStack_8 = FUN_004032fc(param_1,param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  bStack_9 = extraout_DL;
  if ((HGDIOBJ)piStack_8[0xb5] != (HGDIOBJ)0x0) {
    pcStack_10 = (code *)&stack0xfffffffc;
    DeleteObject((HGDIOBJ)piStack_8[0xb5]);
  }
  FUN_0040c968(piStack_8 + 0xb4);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0046b5c6;
  pcStack_14 = (code *)0x46b5be;
  TCustomForm_Destroy(piStack_8,bStack_9 & 0xfc);
  return;
}


