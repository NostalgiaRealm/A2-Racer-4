
/* ==== FUN_0051a750 @ 0051a750 ==== 
 * signature: undefined __stdcall FUN_0051a750(void)
 * body: 0051a750-0051a800
 */

void FUN_0051a750(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (DAT_0074c460 == 0) {
    if (0 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_vertexneighbors__determing_ne_005bc774);
    }
    iVar4 = DAT_0074c6d4 + 1;
    DAT_0074c6d4 = iVar4;
    for (iVar2 = DAT_0074c600; (iVar2 != 0 && (*(int *)(iVar2 + 0x30) != 0));
        iVar2 = *(int *)(iVar2 + 0x30)) {
      if (((*(uint *)(iVar2 + 0x50) & 0x400) == 0) && (iVar1 = *(int *)(iVar2 + 0x34), iVar1 != 0))
      {
        piVar5 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar5 = piVar5 + 1;
          if (*(int *)(iVar1 + 0x10) != iVar4) {
            *(int *)(iVar1 + 0x10) = iVar4;
            uVar3 = FUN_005147d0(DAT_0074c03c);
            *(undefined4 *)(iVar1 + 0xc) = uVar3;
          }
          FUN_00514020((int *)(iVar1 + 0xc),iVar2);
          iVar4 = DAT_0074c6d4;
          iVar1 = *piVar5;
        }
      }
    }
    DAT_0074c460 = 1;
  }
  return;
}


