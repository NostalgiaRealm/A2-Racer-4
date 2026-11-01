
/* ==== FUN_00435c60 @ 00435c60 ==== 
 * signature: undefined __cdecl FUN_00435c60(int param_1)
 * body: 00435c60-00435c92;00435c96-00435e93
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00435c93-00435c95
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00435c60(int param_1)

{
  void *this;
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = param_1 * 0xf0;
  if (*(int *)(iVar3 + 0xac + DAT_00715e50) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____object___d__doesn_t_hav_0059937c);
  }
  iVar2 = FUN_004a8600((void *)(DAT_00715e50 + iVar3),0);
  fVar1 = *(float *)(DAT_0073b5c8 + 0x14 +
                    *(int *)(*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + iVar2 * 0xa9 + 4) * 9 + 4 +
                                              DAT_0073b168) + 4) * 0x10 + DAT_0073b120) * 0xac);
  this = (void *)(iVar3 + DAT_00715e50);
  fVar5 = FUN_004a6800(0x7128b0);
  fVar6 = (float10)ABS(fVar1);
  fVar1 = (float)(((float10)_DAT_005b23b8 / (fVar6 + fVar6)) * fVar5 *
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
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),0);
  *(float *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x78) =
       _DAT_005b23b8 * 0.083333336 * -0.01 * DAT_006fbabc;
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),1);
  iVar4 = 0;
  *(float *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x78) =
       _DAT_005b23b8 * 0.083333336 * -0.01 * DAT_006fbabc;
  do {
    iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),iVar4);
    FUN_004b5770(DAT_0073b0d0 + iVar2 * 0xa9);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}


