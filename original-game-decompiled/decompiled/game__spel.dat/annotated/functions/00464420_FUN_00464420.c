
/* ==== FUN_00464420 @ 00464420 ==== 
 * signature: undefined __stdcall FUN_00464420(void)
 * body: 00464420-0046449a
 */

void FUN_00464420(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  pth_load();
  puVar1 = &DAT_00709b18;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 10;
  } while ((int)puVar1 < 0x709f00);
  iVar4 = 0;
  if (0 < DAT_00712108) {
    piVar3 = &DAT_00709f10;
    do {
      iVar2 = FUN_004641a0(iVar4);
      (&DAT_0070a240)[iVar2 * 0xd0] = 0;
      piVar3[0xcd] = -1;
      if (*(code **)(&DAT_005a64c8 + *piVar3 * 0x14) != (code *)0x0) {
        (**(code **)(&DAT_005a64c8 + *piVar3 * 0x14))(iVar4);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0xd0;
    } while (iVar4 < DAT_00712108);
  }
  return;
}


