
/* ==== FUN_00501770 @ 00501770 ==== 
 * signature: undefined __thiscall FUN_00501770(void * this, uint param_1)
 * body: 00501770-005017b4
 */

void __thiscall FUN_00501770(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = &param_1;
  uVar2 = 0xffffffff;
  iVar4 = 4;
  do {
    uVar1 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_005b8f94 + (((byte)uVar1 ^ uVar2) & 0xff) * 4);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_005017c0(this,param_1,uVar2 | 0x80000000);
  return;
}


