
/* ==== FUN_00544710 @ 00544710 ==== 
 * signature: undefined __fastcall FUN_00544710(void * param_1)
 * body: 00544710-005447b7
 */

void __fastcall FUN_00544710(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x54);
  if (1 < iVar1) {
    iVar2 = *(int *)((int)param_1 + 0x68) + 1;
    iVar3 = *(int *)((int)param_1 + 0x6c) + 2;
    *(int *)((int)param_1 + 0x68) = iVar2;
    *(int *)((int)param_1 + 0x6c) = iVar3;
    while (iVar1 <= iVar2) {
      iVar2 = *(int *)((int)param_1 + 0x68) - iVar1;
      *(int *)((int)param_1 + 0x68) = iVar2;
    }
    while (iVar1 <= iVar3) {
      iVar3 = *(int *)((int)param_1 + 0x6c) - iVar1;
      *(int *)((int)param_1 + 0x6c) = iVar3;
    }
    FUN_00544c90(param_1,*(int *)((int)param_1 + 0x68),*(int *)((int)param_1 + 0x6c));
    iVar1 = *(int *)((int)param_1 + 0x5c);
    *(int *)((int)param_1 + 0x74) = *(int *)((int)param_1 + 0x74) + 2;
    iVar3 = *(int *)((int)param_1 + 0x70) + 1;
    iVar2 = (*(int *)((int)param_1 + 0x4c) - iVar1) + -1;
    *(int *)((int)param_1 + 0x70) = iVar3;
    if (1 < iVar2) {
      while (iVar2 <= iVar3) {
        iVar3 = *(int *)((int)param_1 + 0x70) - iVar2;
        *(int *)((int)param_1 + 0x70) = iVar3;
      }
      iVar3 = *(int *)((int)param_1 + 0x74);
      while (iVar2 <= iVar3) {
        iVar3 = *(int *)((int)param_1 + 0x74) - iVar2;
        *(int *)((int)param_1 + 0x74) = iVar3;
      }
      FUN_00544c90(param_1,*(int *)((int)param_1 + 0x70) + 1 + iVar1,
                   *(int *)((int)param_1 + 0x74) + 1 + iVar1);
    }
  }
  return;
}


