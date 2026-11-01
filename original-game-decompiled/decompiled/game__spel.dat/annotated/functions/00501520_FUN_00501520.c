
/* ==== FUN_00501520 @ 00501520 ==== 
 * signature: undefined __thiscall FUN_00501520(void * this, uint param_1, uint param_2)
 * body: 00501520-00501569
 */

void __thiscall FUN_00501520(void *this,uint param_1,uint param_2)

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
  FUN_00501570(this,param_1,param_2,uVar2 | 0x80000000);
  return;
}


