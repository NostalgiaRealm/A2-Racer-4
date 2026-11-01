
/* ==== TGDIForm.vmt_0e0 @ 0046b5d8 ==== 
 * signature: undefined TGDIForm.vmt_0e0(void)
 * body: 0046b5d8-0046b61c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDIForm_vmt_0e0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    uVar1 = FUN_0044b180(*(int *)PTR_DAT_004ab9f8);
    if (SBORROW4(uVar1,1)) {
      thunk_FUN_00402808(uVar1);
    }
    if (-1 < (int)(uVar1 - 1)) {
      iVar3 = 0;
      do {
        piVar2 = (int *)FUN_0044b16c(*(int *)PTR_DAT_004ab9f8,iVar3);
        (**(code **)(*piVar2 + 0x74))();
        iVar3 = iVar3 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}


