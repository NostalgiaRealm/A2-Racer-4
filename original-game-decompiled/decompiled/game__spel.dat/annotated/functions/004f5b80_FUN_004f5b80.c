
/* ==== FUN_004f5b80 @ 004f5b80 ==== 
 * signature: undefined __fastcall FUN_004f5b80(int * param_1)
 * body: 004f5b80-004f5bd5
 */

void __fastcall FUN_004f5b80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)param_1[1];
  while ((puVar3 != (undefined4 *)0x0 &&
         (puVar1 = (undefined4 *)*puVar3, puVar3 != (undefined4 *)*param_1))) {
    FUN_00559d4e(puVar3);
    puVar3 = puVar1;
  }
  iVar2 = *param_1;
  uVar4 = iVar2 + 0x23U & 0xffffffe0;
  param_1[2] = uVar4;
  if (*(ushort *)((int)param_1 + 0x12) == 0) {
    param_1[1] = iVar2;
    param_1[3] = uVar4 + 0x7fe0;
    return;
  }
  param_1[1] = iVar2;
  param_1[3] = uVar4 + *(ushort *)((int)param_1 + 0x12);
  return;
}


