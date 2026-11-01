
/* ==== FUN_004594a0 @ 004594a0 ==== 
 * signature: int __thiscall FUN_004594a0(void * this, float param_1)
 * body: 004594a0-00459550
 */

int __thiscall FUN_004594a0(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  undefined2 uVar5;
  int iVar3;
  uint3 uVar4;
  
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  if (0.025 < *(float *)((int)this + 0x70)) {
    if (*(int *)((int)this + 0x74) == 0) {
      iVar3 = *(int *)((int)this + 100);
      if (iVar3 < *(int *)(DAT_0073b168 + *(int *)((int)this + 0x60) * 9) + -1) {
        iVar3 = iVar3 + 1;
        *(int *)((int)this + 100) = iVar3;
      }
      else {
        iVar3 = iVar3 + -1;
        *(undefined4 *)((int)this + 0x74) = 1;
        *(int *)((int)this + 100) = iVar3;
      }
    }
    else {
      iVar3 = *(int *)((int)this + 100);
      if (iVar3 < 1) {
        iVar3 = iVar3 + 1;
        *(undefined4 *)((int)this + 0x74) = 0;
        *(int *)((int)this + 100) = iVar3;
      }
      else {
        iVar3 = iVar3 + -1;
        *(int *)((int)this + 100) = iVar3;
      }
    }
    uVar5 = (undefined2)((uint)iVar3 >> 0x10);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  *(float *)((int)this + 0x70) = param_1 + *(float *)((int)this + 0x70);
  fVar2 = param_1 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = fVar2;
  fVar1 = *(float *)((int)this + 8);
  uVar4 = (uint3)(CONCAT22(uVar5,(ushort)(fVar2 < fVar1) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                 (ushort)(fVar2 == fVar1) << 0xe) >> 8);
  if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
    return (uint)uVar4 << 8;
  }
  *(float *)((int)this + 0xc) = param_1 * *(float *)((int)this + 0x34) + *(float *)((int)this + 0xc)
  ;
  *(float *)((int)this + 0x10) =
       param_1 * *(float *)((int)this + 0x38) + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) =
       param_1 * *(float *)((int)this + 0x3c) + *(float *)((int)this + 0x14);
  return CONCAT31(uVar4,1);
}


