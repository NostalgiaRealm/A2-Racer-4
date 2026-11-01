
/* ==== FUN_0048f250 @ 0048f250 ==== 
 * signature: undefined __fastcall FUN_0048f250(void * param_1)
 * body: 0048f250-0048f37a
 */

void __fastcall FUN_0048f250(void *param_1)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  
  FUN_0048f380(param_1,*(int *)((int)param_1 + 0x2c4));
  bVar2 = false;
  iVar3 = FUN_004c5e40(0x58);
  if (iVar3 != 0) {
    *(int *)((int)param_1 + 0x3b8) = *(int *)((int)param_1 + 0x3b8) + 1;
    iVar3 = (*(code *)**(undefined4 **)((int)param_1 + 0x2a8))();
    if (iVar3 <= *(int *)((int)param_1 + 0x3b8)) {
      *(undefined4 *)((int)param_1 + 0x3b8) = 0;
    }
    bVar2 = true;
  }
  iVar3 = FUN_004c5e40(0x5a);
  if (iVar3 == 0) {
    if ((!bVar2) && (*(int *)((int)param_1 + 0x360) != 0)) {
      return;
    }
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x3b8) + -1;
    *(int *)((int)param_1 + 0x3b8) = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(code *)**(undefined4 **)((int)param_1 + 0x2a8))();
      *(int *)((int)param_1 + 0x3b8) = iVar3 + -1;
    }
  }
  iVar3 = FUN_0049dd50(*(int *)(*(int *)(*(int *)((int)param_1 + 0x2ac) + 4) +
                               *(int *)((int)param_1 + 0x3b8) * 4));
  iVar3 = FUN_0049d200(iVar3);
  if (iVar3 != -1) {
    pvVar1 = *(void **)(*(int *)((int)param_1 + 0x3b8) * 4 +
                       *(int *)(*(int *)((int)param_1 + 0x2ac) + 4));
    iVar3 = FUN_0049dd70((int)pvVar1);
    FUN_00489ec0(param_1,pvVar1,iVar3 + *(int *)((int)param_1 + 0x260),-1);
    *(int *)((int)param_1 + 0x2c4) = 0;
  }
  FUN_004899a0(param_1,*(int *)(*(int *)(*(int *)((int)param_1 + 0x2ac) + 4) +
                               *(int *)((int)param_1 + 0x3b8) * 4));
  return;
}


