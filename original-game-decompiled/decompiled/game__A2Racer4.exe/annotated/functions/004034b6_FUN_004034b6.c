
/* ==== FUN_004034b6 @ 004034b6 ==== 
 * signature: undefined __stdcall FUN_004034b6(void)
 * body: 004034b6-0040363a
 */

void FUN_004034b6(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  CHAR CVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  CHAR local_318 [256];
  CHAR local_218 [256];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_00408108,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_0040495f(1,local_118,0x100,local_518,DAT_00408108,DAT_00408324,0);
    FUN_00404710(DAT_00408324,0x100,local_118,0x100,local_218,0x100,DAT_00408108,0);
    FUN_00404710(DAT_00408324,0x200,local_118,0x100,local_318,0x100,DAT_00408108,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_00408220 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          CVar8 = local_318[uVar3];
          goto LAB_004035c2;
        }
        (&DAT_00408120)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_00408220 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        CVar8 = local_218[uVar3];
LAB_004035c2:
        (&DAT_00408120)[uVar3] = CVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_00408220 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_0040360c;
        }
        (&DAT_00408120)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_00408220 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_0040360c:
        (&DAT_00408120)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


