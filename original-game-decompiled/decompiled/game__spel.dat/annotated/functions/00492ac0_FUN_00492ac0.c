
/* ==== FUN_00492ac0 @ 00492ac0 ==== 
 * signature: undefined __fastcall FUN_00492ac0(int param_1)
 * body: 00492ac0-00492ae2;00492ae6-00492c69
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00492ae3-00492ae5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00492ac0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  
  if (*(int *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Element_not_initted_yet__005acf74);
  }
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x24);
  fVar4 = *(float *)(param_1 + 0x34);
  fVar5 = *(float *)(param_1 + 0x28);
  fVar6 = _DAT_005b23b8 * 0.25;
  fVar10 = FUN_004a6800(0x7128b0);
  *(float *)(param_1 + 100) =
       (float)((float10)fVar6 / ((float10)0.6 / fVar10) + (float10)*(float *)(param_1 + 100));
  fVar6 = _DAT_005b23b8 * 0.5;
  fVar10 = FUN_004a6800(0x7128b0);
  *(float *)(param_1 + 0x68) =
       (float)((float10)fVar6 / ((float10)0.6 / fVar10) + (float10)*(float *)(param_1 + 0x68));
  lVar11 = __ftol();
  iVar9 = DAT_0073b530;
  uVar8 = DAT_005b23bc;
  fVar6 = *(float *)(DAT_0073b530 + ((uint)lVar11 & DAT_005b23bc) * 4);
  if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x58)) {
    lVar11 = __ftol();
    fVar7 = -(*(float *)(iVar9 + ((uint)lVar11 & uVar8) * 4) * 0.03);
  }
  else {
    lVar11 = __ftol();
    fVar7 = *(float *)(iVar9 + ((uint)lVar11 & uVar8) * 4) * 0.03;
  }
  pfVar1 = (float *)(param_1 + 0x18);
  *pfVar1 = (fVar2 - fVar3) * fVar6 + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x1c) = (fVar4 - fVar5) * fVar6 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x20) = fVar7 + *(float *)(param_1 + 0x2c);
  FUN_0047bc50(*(void **)(param_1 + 4),pfVar1);
  fVar10 = FUN_004a6800(0x7128b0);
  fVar10 = fVar10 + (float10)*(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x60) = (float)fVar10;
  if ((float10)0.6 <= fVar10) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
    *pfVar1 = *(float *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x38);
    FUN_0047bc50(*(void **)(param_1 + 4),pfVar1);
  }
  return;
}


