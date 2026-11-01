
/* ==== TMenuIni.Destroy @ 0048ed84 ==== 
 * signature: undefined TMenuIni.Destroy(void)
 * body: 0048ed84-0048edea
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMenuIni_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int iVar3;
  int iVar4;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  iVar3 = *(int *)(piVar1[6] + 8);
  if (SBORROW4(iVar3,1)) {
    thunk_FUN_00402808(piVar1[6]);
  }
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar2 = (int *)FUN_0048f44c((int)piVar1,iVar4);
      FUN_00402f9c(piVar2);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00402f9c((int *)piVar1[6]);
  piVar1[6] = 0;
  TDataObject_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


