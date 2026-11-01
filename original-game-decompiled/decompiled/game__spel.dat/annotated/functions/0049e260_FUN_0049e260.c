
/* ==== FUN_0049e260 @ 0049e260 ==== 
 * signature: undefined __thiscall FUN_0049e260(void * this, undefined4 param_1, int param_2, int param_3)
 * body: 0049e260-0049e33e
 */

void __thiscall FUN_0049e260(void *this,undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  
  FUN_004a0100((uint)(*(int *)((int)this + 0x44) == 0),
               (byte *)s__s___d__Sound_source_already_cre_005ae704);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  FUN_004093c0((void *)((int)this + 0x18),(void *)(param_2 + 0x18),0,0xffffffff);
  FUN_004093c0((void *)((int)this + 0x28),(void *)(param_2 + 0x28),0,0xffffffff);
  FUN_004a0100((uint)(param_3 != -1),(byte *)s__s___d__Illegal_value_for_Sound_s_005ae6cc);
  *(undefined4 *)((int)this + 0x58) = param_1;
  *(int *)((int)this + 0x40) = param_3;
  if (*(int *)((int)this + 4) != 0) {
    pcVar2 = *(char **)((int)this + 0x1c);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    uVar1 = FUN_004c7c50(pcVar2,0);
    *(uint *)((int)this + 0x38) = uVar1;
  }
  *(undefined4 *)((int)this + 0x44) = 1;
  return;
}


