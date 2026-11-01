
/* ==== TPageControl.Destroy @ 0048594c ==== 
 * signature: undefined TPageControl.Destroy(void)
 * body: 0048594c-004859a9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TPageControl_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  byte extraout_DL;
  int iVar3;
  int iVar4;
  
  piVar1 = FUN_004032fc(param_1,param_2);
  iVar3 = *(int *)(piVar1[0x90] + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_004102b0((undefined4 *)piVar1[0x90],iVar4);
      *(undefined4 *)(iVar2 + 500) = 0;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00402f9c((int *)piVar1[0x90]);
  TCustomTabControl_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


