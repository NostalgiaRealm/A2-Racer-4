
/* ==== FUN_00501820 @ 00501820 ==== 
 * signature: undefined __thiscall FUN_00501820(void * this, uint param_1, uint param_2)
 * body: 00501820-005018b3
 */

void __thiscall FUN_00501820(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint local_4;
  
  local_4 = param_1;
  puVar3 = &local_4;
  uVar1 = 0xffffffff;
  iVar4 = 4;
  do {
    uVar2 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_005b8f94 + (((byte)uVar2 ^ uVar1) & 0xff) * 4);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0;
  if (0 < *(int *)this) {
    uVar2 = uVar1 | 0x80000000;
    while( true ) {
      uVar2 = *(uint *)((int)this + 4) & uVar2;
      iVar4 = iVar4 + 1;
      puVar3 = (uint *)(*(int *)((int)this + 0xc) + uVar2 * 0xc);
      if (*(int *)(*(int *)((int)this + 0xc) + 8 + uVar2 * 0xc) == 0) break;
      if (((*puVar3 | 0x80000000) == (uVar1 | 0x80000000)) && (puVar3[1] == param_1)) {
        puVar3[2] = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      if (*(int *)this <= iVar4) {
        return;
      }
    }
  }
  return;
}


