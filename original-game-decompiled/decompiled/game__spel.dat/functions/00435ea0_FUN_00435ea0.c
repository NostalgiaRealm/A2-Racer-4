
/* ==== FUN_00435ea0 @ 00435ea0 ==== 
 * signature: undefined __cdecl FUN_00435ea0(float param_1)
 * body: 00435ea0-00435f36;00435f3a-00436169
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00435f37-00435f39
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00435ea0(float param_1)

{
  void *this;
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar3 = (int)param_1 * 0xf0;
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),0);
  fVar1 = *(float *)(DAT_0073b5c8 + 0x14 +
                    *(int *)(*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + iVar2 * 0xa9 + 4) * 9 + 4 +
                                              DAT_0073b168) + 4) * 0x10 + DAT_0073b120) * 0xac);
  if (*(int *)(iVar3 + 0xac + DAT_00715e50) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____object___d__doesn_t_hav_005993d4);
  }
  this = (void *)(iVar3 + DAT_00715e50);
  fVar4 = FUN_004a6800(0x7128b0);
  fVar5 = (float10)ABS(fVar1);
  fVar1 = (float)(((float10)_DAT_005b23b8 / (fVar5 + fVar5)) * fVar4 *
                 (float10)*(float *)((int)this + 0xc4));
  iVar2 = FUN_004a8600(this,0);
  *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) - fVar1;
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),1);
  *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) - fVar1;
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),2);
  *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) - fVar1;
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),3);
  *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8) - fVar1;
  param_1 = *(float *)(iVar3 + 0xcc + DAT_00715e50) * 400.0;
  if (param_1 <= 500.0) {
    if (param_1 < -500.0) {
      param_1 = -500.0;
    }
  }
  else {
    param_1 = 500.0;
  }
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),0);
  *(float *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x78) = param_1;
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),1);
  *(float *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x78) = param_1;
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),0);
  FUN_004b5770(DAT_0073b0d0 + iVar2 * 0xa9);
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),1);
  FUN_004b5770(DAT_0073b0d0 + iVar2 * 0xa9);
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),2);
  FUN_004b5770(DAT_0073b0d0 + iVar2 * 0xa9);
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),3);
  FUN_004b5770(DAT_0073b0d0 + iVar2 * 0xa9);
  return;
}


