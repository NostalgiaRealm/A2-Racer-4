
/* ==== FUN_00402fa5 @ 00402fa5 ==== 
 * signature: undefined __stdcall FUN_00402fa5(void)
 * body: 00402fa5-00403049
 */

void FUN_00402fa5(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = 0x14;
  if (DAT_00409340 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_00409340) goto LAB_00402fc4;
  DAT_00409340 = iVar1;
LAB_00402fc4:
  DAT_00408328 = FUN_00404525(DAT_00409340,4);
  if (DAT_00408328 == (int *)0x0) {
    DAT_00409340 = 0x14;
    DAT_00408328 = FUN_00404525(0x14,4);
    if (DAT_00408328 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_00407358;
  do {
    *(undefined ***)(iVar1 + (int)DAT_00408328) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x4075d8);
  uVar4 = 0;
  puVar3 = &DAT_00407368;
  do {
    iVar1 = *(int *)((&DAT_00409360)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 8);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar3 = 0xffffffff;
    }
    puVar3 = puVar3 + 8;
    uVar4 = uVar4 + 1;
  } while ((int)puVar3 < 0x4073c8);
  return;
}


