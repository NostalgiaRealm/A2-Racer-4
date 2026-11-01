
/* ==== FUN_004af880 @ 004af880 ==== 
 * signature: undefined __cdecl FUN_004af880(int param_1)
 * body: 004af880-004af8d6;004af8e0-004afa36
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004af8d7-004af8df
 */

void __cdecl FUN_004af880(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1 * 0xf0;
  iVar3 = FUN_004a8c50(iVar7 + DAT_00715e50);
  iVar5 = DAT_0073b5c8;
  if (*(int *)(iVar7 + 0x5c + DAT_00715e50) != 0) {
    if (199 < DAT_00719b48) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____Max_nb_of_bboxs_reached_005b0770);
    }
    iVar3 = iVar3 * 0xac;
    iVar4 = DAT_00719b48 * 0x4c;
    puVar1 = (undefined4 *)(iVar3 + 0x10 + DAT_0073b5c8);
    *(undefined4 *)(&DAT_00715fe8 + iVar4) = *puVar1;
    *(undefined4 *)(&DAT_00715fec + iVar4) = puVar1[1];
    *(undefined4 *)(&DAT_00715ff0 + iVar4) = puVar1[2];
    puVar1 = (undefined4 *)(iVar3 + 0x1c + iVar5);
    *(undefined4 *)(&DAT_00715ff4 + iVar4) = *puVar1;
    *(undefined4 *)(&DAT_00715ff8 + iVar4) = puVar1[1];
    *(undefined4 *)(&DAT_00715ffc + iVar4) = puVar1[2];
    puVar1 = (undefined4 *)(iVar3 + 0x4c + iVar5);
    puVar2 = (undefined4 *)(iVar3 + 0x40 + iVar5);
    *(undefined4 *)(&DAT_00716000 + iVar4) = *puVar1;
    *(undefined4 *)(&DAT_00716004 + iVar4) = puVar1[1];
    *(undefined4 *)(&DAT_00716008 + iVar4) = puVar1[2];
    *(undefined4 *)(&DAT_0071600c + iVar4) = *puVar2;
    *(undefined4 *)(&DAT_00716010 + iVar4) = puVar2[1];
    iVar5 = DAT_0073b0d0;
    *(undefined4 *)(&DAT_00716014 + iVar4) = puVar2[2];
    iVar6 = *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9 + iVar5;
    *(undefined4 *)(&DAT_00716018 + iVar4) = *(undefined4 *)(iVar6 + 0x50);
    *(undefined4 *)(&DAT_0071601c + iVar4) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(&DAT_00716020 + iVar4) = *(undefined4 *)(iVar6 + 0x58);
    *(int *)(&DAT_0071602c + iVar4) =
         (int)ROUND(ROUND(*(float *)(iVar5 + *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9 + 0x78)));
    iVar5 = DAT_00719b48 * 0x4c;
    DAT_00719b48 = DAT_00719b48 + 1;
    *(float *)(&DAT_00716024 + iVar5) = *(float *)(iVar3 + 0x74 + DAT_0073b5c8) + 4.0;
    *(int *)(&DAT_00716028 + iVar5) = param_1;
    *(undefined4 *)(&DAT_00716030 + iVar5) = 1;
  }
  return;
}


