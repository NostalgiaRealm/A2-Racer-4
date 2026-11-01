
/* ==== FUN_0050df40 @ 0050df40 ==== 
 * signature: ushort * __thiscall FUN_0050df40(void * this, ushort param_1)
 * body: 0050df40-0050dfb5
 */

ushort * __thiscall FUN_0050df40(void *this,ushort param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  *(ushort *)this = param_1;
  *(undefined2 *)((int)this + 0x10) = 0;
  uVar2 = FUN_004f5a90((uint)param_1 << 4);
  *(undefined4 *)((int)this + 4) = uVar2;
  uVar3 = 0;
  *(undefined2 *)((int)this + 2) = 0;
  if (*(short *)this != 0) {
    iVar4 = 0;
    do {
      sVar1 = (short)uVar3;
      uVar3 = uVar3 + 1;
      *(short *)(*(int *)((int)this + 4) + 4 + iVar4) = sVar1 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < *(ushort *)this);
  }
  *(undefined2 *)((uint)*(ushort *)this * 0x10 + -0xc + *(int *)((int)this + 4)) = 0xffff;
  *(undefined2 *)((int)this + 0xe) = 0xffff;
  *(undefined2 *)((int)this + 0xc) = 0xffff;
  *(undefined4 *)((int)this + 8) = 0x501502f9;
  return this;
}


