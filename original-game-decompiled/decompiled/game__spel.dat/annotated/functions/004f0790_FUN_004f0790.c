
/* ==== FUN_004f0790 @ 004f0790 ==== 
 * signature: undefined __fastcall FUN_004f0790(void * param_1)
 * body: 004f0790-004f081f
 */

void __fastcall FUN_004f0790(void *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint local_2c [4];
  undefined4 local_1c;
  
  puVar1 = (uint *)FUN_004f0a60(param_1,local_2c);
  puVar3 = local_2c;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (local_2c[3] != 0) {
    FUN_004f06c0(param_1,0);
  }
  if (1 < local_2c[3]) {
    FUN_004f06c0(param_1,4);
    *(undefined4 *)((int)param_1 + 0x154) = local_1c;
    *(uint *)((int)param_1 + 0x158) = local_2c[2];
    return;
  }
  *(undefined4 *)((int)param_1 + 0x154) = local_1c;
  *(uint *)((int)param_1 + 0x158) = local_2c[2];
  return;
}


