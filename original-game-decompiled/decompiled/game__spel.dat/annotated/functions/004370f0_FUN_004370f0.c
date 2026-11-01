
/* ==== FUN_004370f0 @ 004370f0 ==== 
 * signature: undefined __cdecl FUN_004370f0(undefined4 param_1, float param_2)
 * body: 004370f0-004371ab;004371af-00437360
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004371ac-004371ae
 */

void __cdecl FUN_004370f0(undefined4 param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  
  fVar2 = param_2;
  iVar6 = (int)param_2 * 0xf0;
  iVar4 = *(int *)(iVar6 + 0x24 + DAT_00715e50) * 0xa9;
  iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 4 + DAT_0073b0d0) * 9 + 4 + DAT_0073b168) + 8)
                   * 0x10 + DAT_0073b120);
  iVar3 = FUN_004b75a0(&DAT_00712130,s_CAR_REFLECT_0059962c);
  param_2 = 0.0;
  if (*(int *)(DAT_0073b168 + *(int *)(iVar4 + 4 + DAT_0073b0d0) * 9) < 3) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____car_type___d__doesn_t_h_0059965c);
  }
  FUN_004aa4a0((int)fVar2,iVar5,
               *(undefined4 *)(**(int **)(DAT_0073b168 + iVar3 * 9 + 4) * 0x10 + 4 + DAT_0073b120),0
               ,0,0,0,0,0);
  if (DAT_006fb940 != 0) {
    iVar4 = FUN_004a8600((void *)(iVar6 + DAT_00715e50),*(int *)(iVar6 + 0xac + DAT_00715e50) + -1);
    *(undefined4 *)(DAT_0073b0d0 + iVar4 * 0xa9 + 0xa5) = 1;
  }
  FUN_004a8600((void *)(iVar6 + DAT_00715e50),*(int *)(iVar6 + 0xac + DAT_00715e50) + -1);
  iVar5 = iVar5 * 0xac;
  iVar4 = *(int *)(iVar5 + 0x84 + DAT_0073b5c8);
  if (0 < iVar4) {
    fVar2 = 0.0;
    pfVar7 = (float *)(*(int *)(iVar5 + 0x80 + DAT_0073b5c8) + 0x1c);
    iVar3 = iVar4;
    do {
      if (fVar2 < pfVar7[-1]) {
        fVar2 = pfVar7[-1];
      }
      if (param_2 < *pfVar7) {
        param_2 = *pfVar7;
      }
      pfVar7 = pfVar7 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (fVar2 != 0.0) goto LAB_004372e5;
  }
  fVar2 = 1.0;
LAB_004372e5:
  if (param_2 == 0.0) {
    param_2 = 1.0;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar5 + 0x80 + DAT_0073b5c8);
      iVar3 = iVar3 + 1;
      *(float *)(iVar6 + 0x18 + iVar4) = (1.0 / fVar2) * *(float *)(iVar6 + 0x18 + iVar4);
      iVar6 = *(int *)(iVar5 + 0x80 + DAT_0073b5c8);
      pfVar7 = (float *)(iVar6 + 0x1c + iVar4);
      pfVar1 = (float *)(iVar6 + 0x1c + iVar4);
      iVar4 = iVar4 + 0x20;
      *pfVar1 = (1.0 / param_2) * *pfVar7;
    } while (iVar3 < *(int *)(iVar5 + 0x84 + DAT_0073b5c8));
  }
  return;
}


