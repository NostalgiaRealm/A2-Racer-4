
/* ==== FUN_00501630 @ 00501630 ==== 
 * signature: undefined __thiscall FUN_00501630(void * this, int param_1)
 * body: 00501630-00501674
 */

void __thiscall FUN_00501630(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = (byte *)&param_1;
  uVar2 = 0xffffffff;
  iVar4 = 4;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_005b8f94 + ((bVar1 ^ uVar2) & 0xff) * 4);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00501680(this,param_1,uVar2 | 0x80000000);
  return;
}


