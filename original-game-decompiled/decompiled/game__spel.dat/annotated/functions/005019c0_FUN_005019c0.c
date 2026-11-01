
/* ==== FUN_005019c0 @ 005019c0 ==== 
 * signature: undefined __thiscall FUN_005019c0(void * this, byte * param_1, undefined4 param_2)
 * body: 005019c0-00501a3a
 */

void __thiscall FUN_005019c0(void *this,byte *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar1 = *(int *)this;
  uVar2 = 0xffffffff;
  iVar6 = iVar1;
  pbVar7 = param_1;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_005b8f94 + ((*pbVar7 ^ uVar2) & 0xff) * 4);
      iVar6 = iVar6 + -1;
      pbVar7 = pbVar7 + 1;
    } while (iVar6 != 0);
  }
  uVar2 = uVar2 % *(uint *)((int)this + 4);
  puVar3 = (undefined4 *)FUN_004f5a90(iVar1 + 0xc);
  uVar5 = *(uint *)this;
  pbVar7 = (byte *)(puVar3 + 2);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar7 = *param_1;
    param_1 = param_1 + 1;
    pbVar7 = pbVar7 + 1;
  }
  *puVar3 = *(undefined4 *)(*(int *)((int)this + 0xc) + uVar2 * 4);
  *(undefined4 **)(*(int *)((int)this + 0xc) + uVar2 * 4) = puVar3;
  puVar3[1] = param_2;
  return;
}


