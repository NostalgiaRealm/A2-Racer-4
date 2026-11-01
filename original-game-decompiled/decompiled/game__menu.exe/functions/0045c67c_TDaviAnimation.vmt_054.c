
/* ==== TDaviAnimation.vmt_054 @ 0045c67c ==== 
 * signature: undefined TDaviAnimation.vmt_054(void)
 * body: 0045c67c-0045c6e2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_054(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iStack_c;
  
  (**(code **)(*(int *)param_1[10] + 0x14))((int *)param_1[10],param_2);
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    iVar4 = *(int *)(param_1[10] + 4);
    if (iVar4 == 0) {
      uVar2 = thunk_FUN_00402808(param_1[10]);
      thunk_FUN_00402808(uVar2);
    }
    iStack_c = 0;
    do {
      piVar3 = (int *)(**(code **)(*param_1 + 0x70))(param_1,iStack_c);
      (**(code **)(*piVar3 + 0x54))(piVar3,param_2);
      iStack_c = iStack_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


