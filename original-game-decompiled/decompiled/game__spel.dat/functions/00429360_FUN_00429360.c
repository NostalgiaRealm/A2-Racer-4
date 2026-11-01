
/* ==== FUN_00429360 @ 00429360 ==== 
 * signature: undefined4 __cdecl FUN_00429360(int param_1)
 * body: 00429360-004293e4;004293ed-00429490
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004293e5-004293ec
 */

undefined4 __cdecl FUN_00429360(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_40 [8];
  float fStack_20;
  float fStack_18;
  
  if (DAT_006fb8e8 == 0) {
    if (DAT_006fb954 == 1) {
      iVar9 = 0;
      goto LAB_0042939f;
    }
  }
  else if (DAT_006fb954 != 1) {
    iVar9 = 0;
    goto LAB_0042939f;
  }
  iVar9 = 1;
LAB_0042939f:
  iVar6 = FUN_004a6d70(*(int *)(DAT_00715e50 + 0x34 + param_1 * 0xf0),0,iVar9);
  iVar6 = iVar6 * 0x50;
  iVar9 = *(int *)(iVar6 + 0x14 + DAT_00715eb8);
  if (((iVar9 == -1) && (iVar9 = *(int *)(iVar6 + 0x18 + DAT_00715eb8), iVar9 == -1)) &&
     (iVar9 = *(int *)(iVar6 + 0x1c + DAT_00715eb8), iVar9 == -1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Waypoint__d_on_chunk__d_h_00596884);
  }
  pfVar1 = (float *)(iVar6 + 8 + DAT_00715eb8);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[2];
  pfVar1 = (float *)(iVar9 * 0x50 + 8 + DAT_00715eb8);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[2];
  puVar7 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(DAT_00715e50 + 0x24 + param_1 * 0xf0) * 0xa9 + 0x10);
  puVar8 = local_40;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if (fStack_20 * (fVar4 - fVar2) + fStack_18 * (fVar5 - fVar3) < 0.0) {
    return 0;
  }
  return 1;
}


