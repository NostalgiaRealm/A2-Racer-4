
/* ==== TfrmMainScreen.Allcharslasttrack1Click @ 0049dce8 ==== 
 * signature: undefined TfrmMainScreen.Allcharslasttrack1Click(void)
 * body: 0049dce8-0049dd27
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmMainScreen_Allcharslasttrack1Click(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  iVar2 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  *(uint *)(iVar2 + 0xc) = uVar1 - 1;
  return;
}


