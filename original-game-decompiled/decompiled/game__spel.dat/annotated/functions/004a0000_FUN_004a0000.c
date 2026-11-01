
/* ==== FUN_004a0000 @ 004a0000 ==== 
 * signature: undefined __thiscall FUN_004a0000(void * this, undefined4 * param_1, undefined4 * param_2)
 * body: 004a0000-004a0032
 */

void __thiscall FUN_004a0000(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x224);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  *param_2 = *(undefined4 *)((int)this + 0x264);
  param_2[1] = *(undefined4 *)((int)this + 0x268);
  param_2[2] = *(undefined4 *)((int)this + 0x26c);
  return;
}


