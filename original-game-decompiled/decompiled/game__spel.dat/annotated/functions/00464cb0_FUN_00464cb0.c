
/* ==== FUN_00464cb0 @ 00464cb0 ==== 
 * signature: undefined __stdcall FUN_00464cb0(void)
 * body: 00464cb0-00464ce4
 */

void FUN_00464cb0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)&DAT_00709b1c;
  do {
    if (piVar2[-1] != 0) {
      iVar1 = FUN_00464a70(piVar2);
      if (iVar1 != 0) {
        FUN_00464c10(iVar3);
      }
    }
    piVar2 = piVar2 + 10;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x709f04);
  return;
}


