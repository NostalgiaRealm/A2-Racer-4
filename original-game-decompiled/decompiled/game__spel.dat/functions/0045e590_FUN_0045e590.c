
/* ==== FUN_0045e590 @ 0045e590 ==== 
 * signature: undefined __thiscall FUN_0045e590(void * this)
 * body: 0045e590-0045e640
 */

void __thiscall FUN_0045e590(void *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 *in_stack_00000050;
  
  puVar2 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
      iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)register0x00000010;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x6c) = in_stack_00000044;
  *(undefined4 *)((int)this + 0x70) = in_stack_00000048;
  *(undefined4 *)((int)this + 0x74) = in_stack_0000004c;
  *(undefined ***)this = &PTR_FUN_005768f0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x41100000;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x41200000;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = *in_stack_00000050;
  *(undefined4 *)((int)this + 0x60) = in_stack_00000050[1];
  *(undefined4 *)((int)this + 100) = in_stack_00000050[2];
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x3f800000;
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x40a00000;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  return;
}


