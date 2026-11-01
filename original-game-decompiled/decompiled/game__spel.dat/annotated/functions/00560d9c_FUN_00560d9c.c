
/* ==== FUN_00560d9c @ 00560d9c ==== 
 * signature: undefined4 __cdecl FUN_00560d9c(int param_1)
 * body: 00560d9c-00560f34
 */

undefined4 __cdecl FUN_00560d9c(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  BYTE *pBVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_1c;
  uint local_8;
  
  CodePage = FUN_00560f35(param_1);
  if (CodePage == DAT_007501a4) {
    return 0;
  }
  if (CodePage != 0) {
    iVar11 = 0;
    pUVar5 = &DAT_005c8948;
    do {
      if (*pUVar5 == CodePage) {
        puVar13 = &DAT_007502c0;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_8 = 0;
        iVar11 = iVar11 * 0x30;
        *(undefined1 *)puVar13 = 0;
        pbVar12 = (byte *)(iVar11 + 0x5c8958);
        do {
          bVar3 = *pbVar12;
          pbVar10 = pbVar12;
          while ((bVar3 != 0 && (bVar3 = pbVar10[1], bVar3 != 0))) {
            uVar7 = (uint)*pbVar10;
            if (uVar7 <= bVar3) {
              bVar4 = (&DAT_005c8940)[local_8];
              do {
                pbVar2 = (byte *)((int)&DAT_007502c0 + uVar7 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 <= bVar3);
            }
            pbVar10 = pbVar10 + 2;
            bVar3 = *pbVar10;
          }
          local_8 = local_8 + 1;
          pbVar12 = pbVar12 + 8;
        } while (local_8 < 4);
        DAT_007501bc = 1;
        DAT_007501a4 = CodePage;
        DAT_007503c4 = FUN_00560f7f(CodePage);
        DAT_007501b0 = *(undefined4 *)(iVar11 + 0x5c894c);
        DAT_007501b4 = *(undefined4 *)(iVar11 + 0x5c8950);
        DAT_007501b8 = *(undefined4 *)(iVar11 + 0x5c8954);
        goto LAB_00560f24;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while ((int)pUVar5 < 0x5c8a38);
    BVar6 = GetCPInfo(CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar13 = &DAT_007502c0;
      DAT_007501a4 = CodePage;
      for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_007503c4 = 0;
      if (local_1c.MaxCharSize < 2) {
        DAT_007501bc = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar8 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar8;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar8[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              pbVar12 = (byte *)((int)&DAT_007502c0 + uVar7 + 1);
              *pbVar12 = *pbVar12 | 4;
            }
            pBVar1 = pBVar8 + 1;
            pBVar8 = pBVar8 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          pbVar12 = (byte *)((int)&DAT_007502c0 + uVar7 + 1);
          *pbVar12 = *pbVar12 | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_007503c4 = FUN_00560f7f(CodePage);
        DAT_007501bc = 1;
      }
      DAT_007501b0 = 0;
      DAT_007501b4 = 0;
      DAT_007501b8 = 0;
      goto LAB_00560f24;
    }
    if (DAT_0074dd4c == 0) {
      return 0xffffffff;
    }
  }
  FUN_00560fb2();
LAB_00560f24:
  FUN_00560fdb();
  return 0;
}


