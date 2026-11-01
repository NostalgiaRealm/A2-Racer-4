
/* ==== FUN_00406460 @ 00406460 ==== 
 * signature: undefined4 __cdecl FUN_00406460(undefined4 param_1, undefined4 * param_2)
 * body: 00406460-00406482;00406486-00406608
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00406483-00406485
 */

uint __cdecl FUN_00406460(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____a_Direction_is_NULL_0058fcf4);
  }
  iVar11 = 0;
  iVar13 = *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50);
  iVar2 = *(int *)(DAT_00715f00 + 0xf8 + iVar13 * 0x994);
  uVar8 = DAT_00715f00 + iVar13 * 0x994;
  if (0 < iVar2) {
    puVar12 = (uint *)(uVar8 + 0x164);
    do {
      uVar8 = *puVar12;
      iVar13 = *(int *)(uVar8 * 0x50 + 0x14 + DAT_00715eb8);
      if (-1 < iVar13) {
        iVar11 = uVar8 * 0x50;
        iVar2 = iVar11 + 8 + DAT_00715eb8;
        fStack_c = *(float *)(iVar11 + 8 + DAT_00715eb8);
        fStack_8 = *(float *)(iVar2 + 4);
        fStack_4 = *(float *)(iVar2 + 8);
        iVar13 = iVar13 * 0x50;
        iVar2 = iVar13 + 8 + DAT_00715eb8;
        fVar4 = *(float *)(iVar13 + 8 + DAT_00715eb8) - fStack_c;
        fVar7 = *(float *)(iVar2 + 4) - fStack_8;
        fVar6 = *(float *)(iVar2 + 8) - fStack_4;
        fVar5 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar6 * fVar6);
        puVar9 = (undefined4 *)FUN_004066c0(&fStack_c,fVar4 / fVar5,fVar7 / fVar5,fVar6 / fVar5);
        uVar10 = puVar9[1];
        uVar3 = puVar9[2];
        *param_2 = *puVar9;
        param_2[1] = uVar10;
        param_2[2] = uVar3;
        puVar9 = (undefined4 *)(iVar11 + 8 + DAT_00715eb8);
        puVar1 = (undefined4 *)(iVar13 + 8 + DAT_00715eb8);
        fStack_8 = (float)puVar1[1] + 10.0;
        uVar10 = FUN_0040a360(*puVar9,(float)puVar9[1] + 10.0,puVar9[2],*puVar1,fStack_8,puVar1[2]);
        return CONCAT31((int3)((uint)uVar10 >> 8),1);
      }
      iVar11 = iVar11 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar11 < iVar2);
  }
  return uVar8 & 0xffffff00;
}


