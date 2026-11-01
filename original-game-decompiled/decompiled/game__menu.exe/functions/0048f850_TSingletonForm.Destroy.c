
/* ==== TSingletonForm.Destroy @ 0048f850 ==== 
 * signature: undefined __register TSingletonForm.Destroy(int * param_1, char param_2)
 * body: 0048f850-0048f8ea
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TSingletonForm_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte extraout_DL;
  int iVar4;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  if (DAT_004ad490 != (int *)0x0) {
    iVar4 = DAT_004ad490[2] + -1;
    if (SBORROW4(DAT_004ad490[2],1)) {
      thunk_FUN_00402808((uint)DAT_004ad490);
    }
    if (-1 < iVar4) {
      do {
        iVar2 = FUN_004102b0(DAT_004ad490,iVar4);
        iVar3 = FUN_00402ee0(piVar1);
        if (iVar3 == *(int *)(iVar2 + 4)) {
          FUN_00410150(DAT_004ad490,iVar4);
          break;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
    if (DAT_004ad490[2] == 0) {
      FUN_00402f9c(DAT_004ad490);
      DAT_004ad490 = (int *)0x0;
    }
  }
  TCustomForm_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


