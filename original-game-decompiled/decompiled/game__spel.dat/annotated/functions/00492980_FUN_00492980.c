
/* ==== FUN_00492980 @ 00492980 ==== 
 * signature: undefined __thiscall FUN_00492980(void * this, int param_1, void * param_2)
 * body: 00492980-00492a88
 */

void __thiscall FUN_00492980(void *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar2 = (float)param_1;
  iVar4 = DAT_005d2ab0 + 1;
  *(undefined4 *)((int)this + 0x54) = 2;
  *(undefined4 *)((int)this + 0x30) = 0xbecccccd;
  fVar3 = 0.5 - (1.5 / (float)iVar4) * fVar2;
  *(float *)((int)this + 0x34) = fVar3;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x20);
  *(int *)((int)this + 0x5c) = param_1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(void **)((int)this + 8) = param_2;
  puVar1 = (undefined4 *)((int)this + 0x3c);
  *puVar1 = 0xbecccccd;
  *(float *)((int)this + 0x40) = fVar3;
  *(undefined4 *)((int)this + 0x44) = 0;
  *puVar1 = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0xbecccccd;
  *(float *)((int)this + 0x4c) = fVar3;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x3dcccccd;
  FUN_0047bc50(param_2,puVar1);
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  else {
    *(float *)((int)this + 0x60) = -1.2 - fVar2 * 0.2;
  }
  param_1 = -1;
  FUN_004930f0(this,&param_1);
  return;
}


