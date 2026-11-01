
/* ==== FUN_004517f0 @ 004517f0 ==== 
 * signature: undefined __stdcall FUN_004517f0(void)
 * body: 004517f0-004518c6;004518ca-004518d0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004518c7-004518c9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004517f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_80 [16];
  float local_40 [16];
  
  FUN_004516a0();
  FUN_00451730();
  FUN_004517c0();
  if (_DAT_005a28b8 != _DAT_006fb974) {
    fVar4 = FUN_004a6800(0x7128b0);
    _DAT_006fb974 =
         (float)((((float10)_DAT_005a28b8 - (float10)_DAT_006fb974) * fVar4) /
                 (float10)_DAT_005a28bc + (float10)_DAT_006fb974);
    puVar1 = (undefined4 *)
             FUN_004b39d0(local_40,0.5 / _DAT_006fb974,12500.0,_DAT_006fb974 * 3.1415927);
    puVar3 = local_80;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = local_80;
    puVar3 = &DAT_0073b3f4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
    if (iVar2 != 0) {
      FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
    }
  }
  return;
}


