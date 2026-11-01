
/* ==== FUN_00501940 @ 00501940 ==== 
 * signature: int __thiscall FUN_00501940(void * this, byte * param_1)
 * body: 00501940-005019b1
 */

int __thiscall FUN_00501940(void *this,byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar3 = 0xffffffff;
  iVar1 = *(int *)this;
  pbVar4 = param_1;
  iVar5 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_005b8f94 + ((*pbVar4 ^ uVar3) & 0xff) * 4);
      iVar5 = iVar5 + -1;
      pbVar4 = pbVar4 + 1;
    } while (iVar5 != 0);
  }
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0xc) + (uVar3 % *(uint *)((int)this + 4)) * 4);
  do {
    if (puVar2 == (undefined4 *)0x0) {
LAB_0050199a:
      return *(int *)((int)this + 8);
    }
    bVar7 = true;
    iVar5 = iVar1;
    pbVar4 = (byte *)(puVar2 + 2);
    pbVar6 = param_1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar7 = *pbVar4 == *pbVar6;
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      if (puVar2 != (undefined4 *)0x0) {
        return puVar2[1];
      }
      goto LAB_0050199a;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


