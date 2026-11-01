
/* ==== FUN_00436dc0 @ 00436dc0 ==== 
 * signature: undefined __cdecl FUN_00436dc0(int param_1, undefined1 param_2)
 * body: 00436dc0-00436e81;00436e85-004370ee
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00436e82-00436e84
 */

void __cdecl FUN_00436dc0(int param_1,undefined1 param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int local_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int iStack_110;
  undefined4 auStack_10c [3];
  float local_100 [16];
  undefined4 auStack_c0 [16];
  undefined4 local_80 [16];
  float afStack_40 [16];
  
  iVar5 = param_1 * 0xf0;
  pfVar1 = (float *)(DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + iVar5) * 0xa9 + 0x10);
  pfVar6 = local_100;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar6 = pfVar6 + 1;
  }
  puVar3 = (undefined4 *)(DAT_00719b50 + 0x14 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  puVar7 = local_80;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  pfVar1 = (float *)FUN_004b4070(&local_140,(int)local_80);
  local_128 = *pfVar1;
  local_124 = pfVar1[1];
  local_120 = pfVar1[2];
  if (10 < *(int *)(DAT_00715e50 + 0xac + iVar5)) {
    local_114 = 0x3f800000;
    local_144 = 9;
    local_118 = 0x3f800000;
    local_11c = 0x3f800000;
    do {
      iVar4 = FUN_004a8600((void *)(DAT_00715e50 + iVar5),local_144);
      iVar2 = FUN_004a8600((void *)(DAT_00715e50 + iVar5),local_144);
      pfVar1 = (float *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x78);
      FUN_004a6800(0x7128b0);
      lVar8 = __ftol();
      iStack_110 = (int)lVar8;
      iVar4 = iVar4 * 0xa9;
      *pfVar1 = (float)iStack_110 + *pfVar1;
      puVar3 = (undefined4 *)(iVar4 + 0x80 + DAT_0073b0d0);
      *puVar3 = local_11c;
      puVar3[1] = local_118;
      puVar3[2] = local_114;
      FUN_004b5770(DAT_0073b0d0 + iVar4);
      puVar3 = (undefined4 *)
               FUN_004b4110(afStack_40,local_100,(float *)(iVar4 + 0x10 + DAT_0073b0d0));
      puVar7 = auStack_c0;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      pfVar1 = (float *)FUN_004b4070(auStack_10c,(int)auStack_c0);
      fStack_134 = *pfVar1;
      fStack_130 = pfVar1[1];
      fStack_12c = pfVar1[2];
      local_140 = (ABS(fStack_134 * local_128 + fStack_130 * local_124 + fStack_12c * local_120) -
                  0.6) * 12.0;
      if (local_140 < 0.0) {
        local_140 = 0.0;
      }
      pfVar1 = (float *)(iVar4 + 0x80 + DAT_0073b0d0);
      *pfVar1 = local_140;
      pfVar1[1] = local_140;
      pfVar1[2] = local_140;
      fStack_13c = local_140;
      fStack_138 = local_140;
      FUN_004b5770(iVar4 + DAT_0073b0d0);
      local_144 = local_144 + 1;
    } while (local_144 < 0xb);
    iVar4 = FUN_004a8600((void *)(DAT_00715e50 + iVar5),9);
    *(undefined1 *)(DAT_0073b0d0 + iVar4 * 0xa9 + 0x90) = param_2;
    iVar4 = FUN_004a8600((void *)(DAT_00715e50 + iVar5),10);
    *(undefined1 *)(DAT_0073b0d0 + iVar4 * 0xa9 + 0x90) = param_2;
    if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
      iVar4 = FUN_004a8600((void *)(DAT_00715e50 + iVar5),9);
      *(undefined1 *)(DAT_0073b0d0 + iVar4 * 0xa9 + 0x90) = 0;
      iVar4 = FUN_004a8600((void *)(DAT_00715e50 + iVar5),10);
      *(undefined1 *)(DAT_0073b0d0 + iVar4 * 0xa9 + 0x90) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____object___d__doesn_t_hav_005995f4);
}


