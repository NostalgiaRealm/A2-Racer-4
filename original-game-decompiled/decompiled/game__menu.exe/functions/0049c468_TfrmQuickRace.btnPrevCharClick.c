
/* ==== TfrmQuickRace.btnPrevCharClick @ 0049c468 ==== 
 * signature: undefined TfrmQuickRace.btnPrevCharClick(void)
 * body: 0049c468-0049c4c0
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmQuickRace_btnPrevCharClick(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0049c4c4(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x38));
    if (SBORROW4(uVar2,1)) {
      thunk_FUN_00402808(uVar2);
    }
    FUN_0049c4d8(param_1);
    return;
  }
  uVar2 = FUN_0049c4c4(param_1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  FUN_0049c4d8(param_1);
  return;
}


