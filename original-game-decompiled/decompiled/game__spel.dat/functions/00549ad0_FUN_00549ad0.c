
/* ==== FUN_00549ad0 @ 00549ad0 ==== 
 * signature: undefined __fastcall FUN_00549ad0(void * param_1)
 * body: 00549ad0-00549b28
 */

void __fastcall FUN_00549ad0(void *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)((int)param_1 + 0x2e);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    puVar1 = *(uint **)(*(int *)((int)param_1 + 0x30) + uVar3 * 4);
    *puVar1 = *puVar1 & 0xfffffffd | 1;
    iVar2 = FUN_00549a70(param_1,puVar1);
    if (iVar2 == 0) {
      puVar1[0x29] = 0;
      puVar1[0x2a] = 0;
      puVar1[0x2b] = 0;
      puVar1[0x25] = 0;
      puVar1[0x26] = 0;
      puVar1[0x27] = 0;
    }
  }
  return;
}


