
/* ==== FUN_0050ff30 @ 0050ff30 ==== 
 * signature: undefined __fastcall FUN_0050ff30(int param_1)
 * body: 0050ff30-0051004d
 */

void __fastcall FUN_0050ff30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(iVar1 + 0x18);
  *(int *)(iVar3 + 0x84) = *(int *)(iVar3 + 0x84) + 1;
  (**(code **)**(undefined4 **)(iVar3 + 0x1c))(iVar1,iVar2,&local_30,&local_28);
  FUN_00539b00();
  uStack_1c = *(undefined4 *)(iVar3 + 0x124);
  uStack_20 = *(undefined4 *)(iVar3 + 0x120);
  local_30 = *(undefined4 *)(iVar3 + 0x120);
  uStack_2c = *(undefined4 *)(iVar3 + 0x124);
  local_28 = &stack0xfffffffc;
  uStack_24 = unaff_EBX;
  FUN_0050e2c0((void *)(iVar1 + 0x68),*(int *)(param_1 + 0x1c));
  uVar4 = FUN_0050dfd0((void *)(iVar1 + 0x68),param_1 + 0x18,
                       (float)(((float10)(double)CONCAT44(uStack_2c,local_30) -
                               (float10)*(double *)(iVar1 + 0x48)) *
                               (float10)*(float *)(iVar1 + 0x50) + (float10)*(float *)(iVar1 + 0x58)
                              + (float10)(double)CONCAT44(uStack_24,local_28)));
  *(uint *)(param_1 + 0x1c) = uVar4;
  uStack_24 = uStack_34;
  local_28 = puStack_38;
  FUN_0050e2c0((void *)(iVar2 + 0x68),*(int *)(param_1 + 0x2c));
  uVar4 = FUN_0050dfd0((void *)(iVar2 + 0x68),param_1 + 0x28,
                       (float)(((float10)(double)CONCAT44(uStack_1c,uStack_20) -
                               (float10)*(double *)(iVar2 + 0x48)) *
                               (float10)*(float *)(iVar2 + 0x50) + (float10)*(float *)(iVar2 + 0x58)
                              + (float10)(double)CONCAT44(uStack_24,local_28)));
  *(uint *)(param_1 + 0x2c) = uVar4;
  return;
}


