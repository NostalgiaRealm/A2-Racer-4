
/* ==== TfrmCharacter.btnNextCharClick @ 0049ac04 ==== 
 * signature: undefined TfrmCharacter.btnNextCharClick(void)
 * body: 0049ac04-0049ac51
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCharacter_btnNextCharClick(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_0049ac54();
  iVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  if (uVar1 == uVar3) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 + 1;
    if (SCARRY4(uVar1,1)) {
      thunk_FUN_00402808(uVar3);
    }
  }
  FUN_0049ac68(param_1,iVar2);
  return;
}


