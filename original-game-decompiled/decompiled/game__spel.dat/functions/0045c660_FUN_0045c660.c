
/* ==== FUN_0045c660 @ 0045c660 ==== 
 * signature: undefined2 __thiscall FUN_0045c660(void * this, float param_1, float param_2)
 * body: 0045c660-0045c776
 */

ushort __thiscall FUN_0045c660(void *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_EAX;
  float10 fVar4;
  
  fVar2 = param_1 + *(float *)((int)this + 4);
  *(float *)((int)this + 4) = fVar2;
  fVar1 = *(float *)((int)this + 8);
  if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
    return (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
           (ushort)(fVar2 == fVar1) << 0xe;
  }
  if (*(float *)((int)this + 0x10) <= param_2 + 0.11) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(float *)((int)this + 0x10) = param_2 + 0.1;
    return 1;
  }
  fVar1 = (*(float *)((int)this + 0x18) / *(float *)((int)this + 0x30)) * param_1 +
          *(float *)((int)this + 0x34);
  *(float *)((int)this + 0x34) = fVar1;
  fVar2 = ((*(float *)((int)this + 0x1c) - *(float *)((int)this + 0x30) * 9.81) /
          *(float *)((int)this + 0x30)) * param_1 + *(float *)((int)this + 0x38);
  *(float *)((int)this + 0x38) = fVar2;
  fVar3 = (*(float *)((int)this + 0x20) / *(float *)((int)this + 0x30)) * param_1 +
          *(float *)((int)this + 0x3c);
  *(float *)((int)this + 0x3c) = fVar3;
  *(float *)((int)this + 0xc) = fVar1 * param_1 + *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x10) = fVar2 * param_1 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = fVar3 * param_1 + *(float *)((int)this + 0x14);
  fVar4 = FUN_004602e0(-0.1,0.5);
  *(float *)((int)this + 0x24) = (float)(fVar4 + (float10)*(float *)((int)this + 0x24));
  fVar4 = FUN_004602e0(-0.1,0.5);
  *(float *)((int)this + 0x28) = (float)(fVar4 + (float10)*(float *)((int)this + 0x28));
  fVar4 = FUN_004602e0(-0.1,0.5);
  *(float *)((int)this + 0x2c) = (float)(fVar4 + (float10)*(float *)((int)this + 0x2c));
  return (short)CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}


