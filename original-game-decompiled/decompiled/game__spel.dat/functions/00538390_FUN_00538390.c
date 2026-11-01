
/* ==== FUN_00538390 @ 00538390 ==== 
 * signature: bool __stdcall FUN_00538390(void)
 * body: 00538390-00538503
 */

bool FUN_00538390(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_EDI;
  bool bVar6;
  
  if (DAT_0074c03c != 2) {
    iVar1 = FUN_005361a0();
    bVar6 = iVar1 != 0;
    uVar3 = DAT_0074c60c;
    while( true ) {
      for (; (uVar3 != 0 && (*(int *)(uVar3 + 0x30) != 0)); uVar3 = *(uint *)(uVar3 + 0x30)) {
        if ((*(uint *)(uVar3 + 0x50) & 0x10000000) != 0) {
          if (DAT_0074beb0 == 0) {
            *(uint *)(uVar3 + 0x50) = *(uint *)(uVar3 + 0x50) & 0xefffffff;
          }
          FUN_005385a0(uVar3);
        }
      }
      uVar3 = DAT_0074c60c;
      piVar5 = DAT_0074c630;
      if (DAT_0074beb0 == 0) break;
      for (; (DAT_0074c630 = piVar5, uVar3 != 0 && (*(int *)(uVar3 + 0x30) != 0));
          uVar3 = *(uint *)(uVar3 + 0x30)) {
        if ((*(uint *)(uVar3 + 0x50) & 0x10000000) != 0) {
          iVar1 = *(int *)(uVar3 + 0x34);
          *(uint *)(uVar3 + 0x50) = *(uint *)(uVar3 + 0x50) & 0xefffffff;
          if (iVar1 != 0) {
            piVar5 = *(int **)(iVar1 + 4);
            puVar4 = (undefined4 *)(iVar1 + 8);
            while (piVar5 != (int *)0x0) {
              if (((piVar5[5] & 0x4000000U) != 0) &&
                 (uVar2 = FUN_00538750(piVar5,uVar3,unaff_EDI), uVar2 != 0)) {
                puVar4 = puVar4 + -1;
              }
              piVar5 = (int *)*puVar4;
              puVar4 = puVar4 + 1;
            }
          }
        }
        piVar5 = DAT_0074c630;
      }
      while( true ) {
        if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
          if (0 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_reducevertices__renamed__d_sh_005c6b18);
          }
          return bVar6;
        }
        uVar3 = piVar5[5];
        if (((((uVar3 & 0x4000000) != 0) && ((uVar3 & 0x8000000) == 0)) &&
            (piVar5[5] = uVar3 & 0xfbffffff, 3 < DAT_0074c03c)) &&
           ((uVar3 = FUN_00538510(piVar5), uVar3 != 0 && (iVar1 = FUN_005361a0(), iVar1 != 0))))
        break;
        piVar5 = (int *)*piVar5;
      }
      bVar6 = true;
      uVar3 = DAT_0074c60c;
    }
  }
  return false;
}


