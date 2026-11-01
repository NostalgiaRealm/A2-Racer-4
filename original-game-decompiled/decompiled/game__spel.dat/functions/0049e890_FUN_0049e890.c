
/* ==== FUN_0049e890 @ 0049e890 ==== 
 * signature: undefined __thiscall FUN_0049e890(void * this, float param_1, float param_2, float param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7)
 * body: 0049e890-0049ea26
 */

void __thiscall
FUN_0049e890(void *this,float param_1,float param_2,float param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [3];
  
  local_50 = 0x49e8ac;
  FUN_0049e810(this,&local_24,local_c,&local_18);
  local_24 = param_1 - local_24;
  local_20 = param_2 - local_20;
  local_1c = param_3 - local_1c;
  fVar1 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
  if (fVar1 < (float)*(int *)((int)this + 0xc)) {
    if (fVar1 == 0.0) {
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    else {
      local_30 = local_24 / fVar1;
      local_2c = local_20 / fVar1;
      local_28 = local_1c / fVar1;
    }
    uVar2 = FUN_0049e630((int)this);
    if (uVar2 == 0) {
      FUN_0049e550(this,param_7);
    }
    iVar3 = FUN_0049e7d0(this,(int)fVar1);
    *(int *)((int)this + 0x48) = iVar3;
    FUN_0049e3c0((int)this);
    iVar3 = FUN_0049e750(&local_30,local_c);
    FUN_0049e460(this,iVar3);
    local_58 = param_4;
    local_54 = param_5;
    local_50 = param_6;
    local_64 = local_18;
    local_60 = local_14;
    local_5c = local_10;
    lVar4 = FUN_0049e6f0((int)this,(uint)&local_64);
    FUN_0049e3f0(this,(int)lVar4);
  }
  else {
    uVar2 = FUN_0049e630((int)this);
    if (uVar2 != 0) {
      FUN_0049e570((int)this);
      return;
    }
  }
  return;
}


