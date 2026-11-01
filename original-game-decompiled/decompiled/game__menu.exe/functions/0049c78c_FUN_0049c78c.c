
/* ==== FUN_0049c78c @ 0049c78c ==== 
 * signature: undefined FUN_0049c78c(void)
 * body: 0049c78c-0049c84b
 */

void FUN_0049c78c(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_8;
  
  iVar3 = FUN_0049c768(param_1);
  iVar3 = FUN_00462abc(iVar3);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402808(uVar4);
  }
  if (-1 < (int)uVar4) {
    uStack_8 = uVar4 + 1;
    iVar3 = 0;
    do {
      iVar5 = FUN_0049c768(param_1);
      uVar6 = FUN_004627d0(iVar5,iVar3);
      uVar4 = FUN_00461a4c(uVar6,*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xb8));
      iVar5 = FUN_0049c768(param_1);
      iVar5 = FUN_004627d0(iVar5,iVar3);
      bVar1 = FUN_00461c84(iVar5);
      if (bVar1) {
        iVar5 = FUN_0049c768(param_1);
        uVar6 = FUN_004627d0(iVar5,iVar3);
        cVar2 = FUN_0048c644(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xc0),uVar6);
        if (cVar2 == '\0') {
          uVar4 = 0;
        }
      }
      FUN_0045ed90(*(int *)(param_1 + 0x358),uVar4);
      iVar3 = iVar3 + 1;
      uStack_8 = uStack_8 + -1;
    } while (uStack_8 != 0);
  }
  piVar7 = (int *)(**(code **)(**(int **)(param_1 + 0x358) + 8))();
  uVar4 = FUN_0045f46c();
  FUN_0045fd98(uVar4,0x49c854,piVar7);
  return;
}


