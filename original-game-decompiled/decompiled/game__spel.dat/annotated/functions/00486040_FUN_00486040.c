
/* ==== FUN_00486040 @ 00486040 ==== 
 * signature: undefined __thiscall FUN_00486040(void * this, undefined4 * param_1)
 * body: 00486040-00486094;00486098-004860e4;004860e8-00486128;0048612c-0048616a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00486095-00486097 004860e5-004860e7 00486129-0048612b
 */

void __thiscall FUN_00486040(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [15];
  undefined4 *puStack_4;
  
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_40;
  puVar3 = &DAT_0073b434;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,2,&DAT_0073b434);
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  puVar2 = puStack_4;
  puVar3 = (undefined4 *)&stack0xffffffb4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)&stack0xffffffb4;
  puVar3 = &DAT_0073b3f4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,3,&DAT_0073b3f4);
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  if (DAT_0073b4fd != 1) {
    DAT_0073b4fd = 1;
    iVar1 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,7,1);
    if (iVar1 != 0) {
      FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____ZBUFFER__error_setting_0059c150);
    }
  }
  if ((*(char *)((int)this + 0x8a) != '\0') && (*(char *)((int)this + 0x8b) != '\0')) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
  }
  FUN_004bc200(&DAT_0073b258,(uint)*(byte *)((int)this + 0x89));
  return;
}


