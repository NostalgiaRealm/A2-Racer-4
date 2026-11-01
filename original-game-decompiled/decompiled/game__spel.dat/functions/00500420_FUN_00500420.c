
/* ==== FUN_00500420 @ 00500420 ==== 
 * signature: undefined __fastcall FUN_00500420(void * param_1)
 * body: 00500420-005004a3
 */

void __fastcall FUN_00500420(void *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(ushort *)((int)param_1 + 0x1e);
  iVar1 = 0;
  while (iVar5 = iVar1, iVar1 = iVar5 + 1, iVar1 < (int)(uint)uVar2) {
    iVar3 = (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)param_1 + 0x20) + 4 + iVar5 * 4) +
                        0x14))();
    iVar4 = (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)param_1 + 0x20) + iVar5 * 4) + 0x14
                        ))();
    if (iVar3 < iVar4) {
      FUN_005004b0(param_1,iVar5,iVar1);
      while ((0 < iVar5 &&
             (iVar4 = (**(code **)(*(int *)**(undefined4 **)
                                             (*(int *)((int)param_1 + 0x20) + -4 + iVar5 * 4) + 0x14
                                  ))(), iVar3 < iVar4))) {
        FUN_005004b0(param_1,iVar5 + -1,iVar5);
        iVar5 = iVar5 + -1;
      }
    }
  }
  return;
}


