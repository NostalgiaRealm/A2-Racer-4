
/* ==== TTabSheet.Destroy @ 00485554 ==== 
 * signature: undefined TTabSheet.Destroy(void)
 * body: 00485554-0048559f
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TTabSheet_Destroy(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar2 = FUN_004032fc(param_1,param_2);
  iVar1 = piVar2[0x7d];
  if (iVar1 != 0) {
    if (piVar2 == *(int **)(iVar1 + 0x24c)) {
      *(undefined4 *)(iVar1 + 0x24c) = 0;
    }
    FUN_00485ef8((int *)piVar2[0x7d],piVar2);
  }
  TWinControl_Destroy(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar2);
  }
  return;
}


