
/* ==== FUN_004644a0 @ 004644a0 ==== 
 * signature: undefined __stdcall FUN_004644a0(void)
 * body: 004644a0-004644da
 */

void FUN_004644a0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_00712108) {
    piVar2 = &DAT_00709f10;
    do {
      if (*(code **)(&DAT_005a64d8 + *piVar2 * 0x14) != (code *)0x0) {
        (**(code **)(&DAT_005a64d8 + *piVar2 * 0x14))(iVar1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xd0;
    } while (iVar1 < DAT_00712108);
  }
  return;
}


