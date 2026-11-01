
/* ==== FUN_004576c0 @ 004576c0 ==== 
 * signature: undefined __thiscall FUN_004576c0(void * this, undefined4 param_1)
 * body: 004576c0-004576e9;004576ed-004576ef
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004576ea-004576ec
 */

void __thiscall FUN_004576c0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x2c) + 0x20))(*(int **)((int)this + 0x2c),param_1);
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_setting_material_a_005a3a4c);
  }
  return;
}


