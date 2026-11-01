
/* ==== FUN_00491700 @ 00491700 ==== 
 * signature: undefined __thiscall FUN_00491700(void * this, int param_1)
 * body: 00491700-004917a4
 */

void __thiscall FUN_00491700(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_38 [12];
  float local_2c [3];
  byte local_20 [32];
  
  *(int *)((int)this + 0xc) = param_1;
  local_2c[0] = 0.0;
  local_2c[1] = 0.0;
  local_2c[2] = 0.0;
  wsprintfA((LPSTR)local_20,&DAT_005acd58,param_1);
  uVar3 = 0;
  do {
    uVar2 = 0xffffffff;
    pbVar4 = local_20;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    if (~uVar2 - 2 < uVar3) {
      param_1 = 0;
    }
    else {
      local_38[0] = local_20[uVar3];
      local_38[1] = 0;
      param_1 = FUN_0055933d((void *)CONCAT31((int3)(~uVar2 - 2 >> 8),local_38[0]),local_38);
    }
    local_2c[0] = (float)param_1 * *(float *)((int)this + 8);
    FUN_0047bc90(*(void **)(*(int *)(*(int *)((int)this + 4) + 4) + uVar3 * 4),local_2c);
    uVar3 = uVar3 + 1;
    if (3 < (int)uVar3) {
      return;
    }
  } while( true );
}


