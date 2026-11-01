
/* ==== FUN_004feac0 @ 004feac0 ==== 
 * signature: undefined __thiscall FUN_004feac0(void * this, undefined8 * param_1)
 * body: 004feac0-004febc1
 */

void __thiscall FUN_004feac0(void *this,undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  
  *(undefined ***)this = &PTR_FUN_00578708;
  uVar1 = *(undefined4 *)((int)param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined4 *)((int)this + 0x60) = uVar2;
  uVar4 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar2 = *(undefined4 *)((int)param_1 + 0x14);
  *(undefined8 *)((int)this + 8) = *param_1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined8 *)((int)this + 0x10) = uVar4;
  *(undefined4 *)((int)this + 0x1c) = uVar2;
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)param_1 + 0x34);
  *(float *)((int)this + 0x48) = (float)*(double *)((int)this + 8);
  *(float *)((int)this + 0x4c) = (float)*(double *)((int)this + 0x10);
  *(float *)((int)this + 0x50) = (float)*(double *)((int)this + 0x18);
  fVar3 = *(float *)((int)this + 0x68) * 0.5;
  *(float *)((int)this + 0x48) = *(float *)((int)this + 0x58) * fVar3 + *(float *)((int)this + 0x48)
  ;
  *(float *)((int)this + 0x4c) = *(float *)((int)this + 0x5c) * fVar3 + *(float *)((int)this + 0x4c)
  ;
  *(float *)((int)this + 0x50) = *(float *)((int)this + 0x60) * fVar3 + *(float *)((int)this + 0x50)
  ;
  fVar3 = *(float *)((int)this + 0x68);
  *(double *)((int)this + 0x28) =
       (double)(*(float *)((int)this + 0x58) * fVar3 + (float)*(double *)((int)this + 8));
  *(double *)((int)this + 0x30) =
       (double)(*(float *)((int)this + 0x5c) * fVar3 + (float)*(double *)((int)this + 0x10));
  *(double *)((int)this + 0x38) =
       (double)(*(float *)((int)this + 0x60) * fVar3 + (float)*(double *)((int)this + 0x18));
  return;
}


