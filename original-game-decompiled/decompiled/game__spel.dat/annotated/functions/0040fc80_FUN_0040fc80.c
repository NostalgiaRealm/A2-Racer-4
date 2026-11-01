
/* ==== FUN_0040fc80 @ 0040fc80 ==== 
 * signature: uint __thiscall FUN_0040fc80(void * this, uint param_1, uint param_2, byte * param_3, uint param_4)
 * body: 0040fc80-0040fce8
 */

uint __thiscall FUN_0040fc80(void *this,uint param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_0054b29c();
  }
  uVar1 = *(int *)((int)this + 8) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  if (*(int *)((int)this + 4) == 0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)(*(int *)((int)this + 4) + param_1);
  }
  bVar4 = false;
  uVar2 = 0;
  bVar5 = true;
  do {
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    bVar4 = *pbVar3 < *param_3;
    bVar5 = *pbVar3 == *param_3;
    pbVar3 = pbVar3 + 1;
    param_3 = param_3 + 1;
  } while (bVar5);
  if (!bVar5) {
    uVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
  }
  if (uVar2 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar2 = (uint)(param_2 != param_4);
  }
  return uVar2;
}


