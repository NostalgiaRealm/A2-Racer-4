
/* ==== FUN_0053cd60 @ 0053cd60 ==== 
 * signature: undefined __fastcall FUN_0053cd60(int param_1)
 * body: 0053cd60-0053cddc
 */

void __fastcall FUN_0053cd60(int param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  int iVar4;
  
  fVar3 = -*(float *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x14);
  uVar2 = *(ushort *)(param_1 + 0x2e);
  while (uVar2 != 0xffff) {
    iVar4 = *(int *)(param_1 + 0x24) + (uint)uVar2 * 0x10;
    uVar2 = *(ushort *)(iVar4 + 4);
    if (iVar4 == 0) break;
    *(float *)(iVar4 + 8) = fVar3 + *(float *)(iVar4 + 8);
    (**(code **)(**(int **)(iVar4 + 0xc) + 0xc))(fVar3,-fVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(float *)(param_1 + 0x28) = fVar3 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x18) = fVar3 + *(float *)(param_1 + 0x18);
  return;
}


