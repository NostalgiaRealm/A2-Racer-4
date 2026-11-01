
/* ==== FUN_0050c020 @ 0050c020 ==== 
 * signature: undefined __thiscall FUN_0050c020(void * this, int param_1)
 * body: 0050c020-0050c101
 */

void __thiscall FUN_0050c020(void *this,int param_1)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x120);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x124);
  dVar1 = *(double *)(param_1 + 0x130);
  *(double *)(param_1 + 0x128) = *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0x130);
  iVar4 = *(int *)(iVar3 + 8);
  uVar2 = *(ushort *)(iVar4 + 0xe);
  while (uVar2 != 0xffff) {
    iVar6 = (uint)uVar2 * 0x10 + *(int *)(iVar4 + 4);
    uVar2 = *(ushort *)(iVar6 + 4);
    if (iVar6 == 0) break;
    *(float *)(iVar6 + 8) = *(float *)(iVar6 + 8) - (float)dVar1;
  }
  *(float *)(*(int *)(iVar3 + 8) + 8) = *(float *)(*(int *)(iVar3 + 8) + 8) - (float)dVar1;
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1 + 0x130);
  uVar5 = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = uVar5;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  FUN_004f86f0(param_1);
  FUN_0050bf40(*(void **)(param_1 + 4),(int)this,*(undefined4 *)(param_1 + 0x128),
               *(undefined4 *)(param_1 + 300));
  return;
}


