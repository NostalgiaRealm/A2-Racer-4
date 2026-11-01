
/* ==== FUN_005598a4 @ 005598a4 ==== 
 * signature: undefined __stdcall FUN_005598a4(void)
 * body: 005598a4-00559948
 */

void FUN_005598a4(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = 0x14;
  if (DAT_00751400 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_00751400) goto LAB_005598c3;
  DAT_00751400 = iVar1;
LAB_005598c3:
  DAT_007503e0 = FUN_0055ab88(DAT_00751400,4);
  if (DAT_007503e0 == (int *)0x0) {
    DAT_00751400 = 0x14;
    DAT_007503e0 = FUN_0055ab88(0x14,4);
    if (DAT_007503e0 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_005c7bd8;
  do {
    *(undefined ***)(iVar1 + (int)DAT_007503e0) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x5c7e58);
  uVar4 = 0;
  puVar3 = &DAT_005c7be8;
  do {
    iVar1 = *(int *)((&DAT_007500a0)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 8);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar3 = 0xffffffff;
    }
    puVar3 = puVar3 + 8;
    uVar4 = uVar4 + 1;
  } while ((int)puVar3 < 0x5c7c48);
  return;
}


