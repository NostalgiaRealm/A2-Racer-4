
/* ==== TCustomForm.vmt_0c8 @ 0044a038 ==== 
 * signature: undefined TCustomForm.vmt_0c8(void)
 * body: 0044a038-0044a09e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_0c8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && ((char)param_1[0x5a] != '\0')) {
    (**(code **)(*param_1 + 0x70))();
    if (param_1[0x8c] != 0) {
      iVar1 = FUN_0043f018(*(int *)(param_1[0x8c] + 0x28));
      if (-1 < iVar1 + -1) {
        iVar3 = 0;
        do {
          piVar2 = (int *)FUN_0043f028(*(int *)(param_1[0x8c] + 0x28),iVar3);
          if (*(char *)((int)piVar2 + 0x32) != '\0') {
            (**(code **)(*piVar2 + 0x3c))();
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    FUN_00449fc8((int)param_1);
  }
  return;
}


