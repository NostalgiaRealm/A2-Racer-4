
/* ==== FUN_004f5be0 @ 004f5be0 ==== 
 * signature: undefined __thiscall FUN_004f5be0(void * this, int param_1)
 * body: 004f5be0-004f5c24
 */

void __thiscall FUN_004f5be0(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 + 0x1fU & 0xffffffe0;
  uVar3 = 0x7fd8;
  if (0x7fd8 < uVar4) {
    uVar3 = uVar4;
  }
  puVar1 = (undefined4 *)FUN_004f5a90(uVar3 + 0x28);
  *puVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 **)((int)this + 4) = puVar1;
  uVar2 = (int)puVar1 + 0x23U & 0xffffffe0;
  *(uint *)((int)this + 8) = uVar2 + uVar4;
  *(uint *)((int)this + 0xc) = uVar2 + uVar3;
  return;
}


