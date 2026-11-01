
/* ==== FUN_00485ed0 @ 00485ed0 ==== 
 * signature: undefined __thiscall FUN_00485ed0(void * this, undefined4 * param_1)
 * body: 00485ed0-00485fb8;00485fbc-00486029;0048602d-00486032
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00485fb9-00485fbb 0048602a-0048602c
 */

void __thiscall FUN_00485ed0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [15];
  undefined4 *puStack_4;
  
  if (DAT_0073b515 == 0) {
    *(undefined1 *)((int)this + 0x89) = 0;
  }
  else {
    *(undefined1 *)((int)this + 0x89) = 1;
  }
  FUN_004bc200(&DAT_0073b258,(uint)(*(char *)((int)this + 0x88) != '\0'));
  if ((*(char *)((int)this + 0x8a) != '\0') && (*(char *)((int)this + 0x8b) != '\0')) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,5);
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,6);
  }
  puVar2 = &DAT_0073b434;
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  puVar2 = &DAT_0073b538;
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
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
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  puVar2 = &DAT_0073b3f4;
  puVar3 = (undefined4 *)&stack0xffffffb4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)&stack0xffffffb4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puStack_4 = *puVar2;
    puVar2 = puVar2 + 1;
    puStack_4 = puStack_4 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x48);
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
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  return;
}


