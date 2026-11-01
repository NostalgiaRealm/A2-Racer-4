
/* ==== TfrmCharacter.imgCarClick @ 0049b1b4 ==== 
 * signature: undefined TfrmCharacter.imgCarClick(void)
 * body: 0049b1b4-0049b203
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCharacter_imgCarClick(int param_1)

{
  int iVar1;
  byte bStack_28;
  char cStack_27;
  
  FUN_0048b2b4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),&bStack_28);
  if (cStack_27 == 'f') {
    iVar1 = TGDIButtonDefinition_get_UpLink(*(int *)(*(int *)PTR_DAT_004ab694 + 0x94),4);
    (**(code **)(**(int **)(param_1 + 0x2dc) + 0x88))(*(int **)(param_1 + 0x2dc),iVar1);
  }
  return;
}


