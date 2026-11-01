
/* ==== TfrmQuickRace.btnNextCharClick @ 0049c40c ==== 
 * signature: undefined TfrmQuickRace.btnNextCharClick(void)
 * body: 0049c40c-0049c467
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmQuickRace_btnNextCharClick(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_0049c4c4(param_1);
  iVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  if (uVar1 == uVar3) {
    FUN_0049c4d8(param_1,0);
  }
  else {
    uVar1 = FUN_0049c4c4(param_1);
    if (SCARRY4(uVar1,1)) {
      thunk_FUN_00402808(uVar1);
    }
    FUN_0049c4d8(param_1);
  }
  return;
}


