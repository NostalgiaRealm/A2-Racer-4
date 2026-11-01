
/* ==== FUN_004afa40 @ 004afa40 ==== 
 * signature: undefined __cdecl FUN_004afa40(int param_1, int param_2)
 * body: 004afa40-004afa99;004afaa2-004afbcd
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004afa9a-004afaa1
 */

void __cdecl FUN_004afa40(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_00715f00 + 0x104 + (param_2 + param_1 * 0x265) * 4) * 0x60;
  fVar2 = *(float *)(iVar4 + 0x5c + DAT_0073b088);
  if (199 < DAT_00719b48) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Max_nb_of_bboxs_reached_005b0770);
  }
  iVar3 = DAT_00719b48 * 0x4c;
  *(undefined4 *)(&DAT_00715fe8 + iVar3) = 0xc1200000;
  *(undefined4 *)(&DAT_00715fec + iVar3) = 0;
  fVar2 = fVar2 + 1.0;
  *(undefined4 *)(&DAT_00715ff0 + iVar3) = 0xbf800000;
  *(undefined4 *)(&DAT_00715ff4 + iVar3) = 0;
  *(undefined4 *)(&DAT_00715ff8 + iVar3) = 0;
  *(undefined4 *)(&DAT_00715ffc + iVar3) = 0xbf800000;
  *(undefined4 *)(&DAT_00716000 + iVar3) = 0;
  *(undefined4 *)(&DAT_00716004 + iVar3) = 0;
  *(float *)(&DAT_00716008 + iVar3) = fVar2;
  *(undefined4 *)(&DAT_0071600c + iVar3) = 0xc1200000;
  *(undefined4 *)(&DAT_00716010 + iVar3) = 0;
  *(float *)(&DAT_00716014 + iVar3) = fVar2;
  puVar1 = (undefined4 *)(iVar4 + DAT_0073b088);
  *(undefined4 *)(&DAT_00716018 + iVar3) = *puVar1;
  *(undefined4 *)(&DAT_0071601c + iVar3) = puVar1[1];
  *(undefined4 *)(&DAT_00716020 + iVar3) = puVar1[2];
  *(int *)(&DAT_0071602c + iVar3) = (int)ROUND(ROUND((float)puVar1[6]));
  iVar4 = DAT_00719b48 * 0x4c;
  *(undefined4 *)(&DAT_00716024 + iVar4) = 0;
  *(undefined4 *)(&DAT_00716028 + iVar4) = 0xffffffff;
  *(undefined4 *)(&DAT_00716030 + iVar4) = 0;
  DAT_00719b48 = DAT_00719b48 + 1;
  return;
}


