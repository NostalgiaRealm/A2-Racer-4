
/* ==== TScreen.Destroy @ 0044b04c ==== 
 * signature: undefined TScreen.Destroy(void)
 * body: 0044b04c-0044b0f0
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TScreen_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  int iVar3;
  int iVar4;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  FUN_00402f9c((int *)piVar1[0x1d]);
  FUN_00402f9c((int *)piVar1[0x1f]);
  FUN_00402f9c((int *)piVar1[0x1e]);
  FUN_00402f9c((int *)piVar1[0x12]);
  FUN_00402f9c((int *)piVar1[0x11]);
  FUN_00402f9c((int *)piVar1[0x10]);
  FUN_00402f9c((int *)piVar1[9]);
  FUN_00402f9c((int *)piVar1[10]);
  FUN_00402f9c((int *)piVar1[0x1c]);
  if ((piVar1[0x13] != 0) && (iVar3 = *(int *)(piVar1[0x13] + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    do {
      piVar2 = (int *)FUN_004102b0((undefined4 *)piVar1[0x13],iVar4);
      FUN_00402f9c(piVar2);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00402f9c((int *)piVar1[0x13]);
  FUN_0044b2e4((int)piVar1);
  TComponent_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


