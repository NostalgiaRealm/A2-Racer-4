
/* ==== FUN_005328f0 @ 005328f0 ==== 
 * signature: undefined __cdecl FUN_005328f0(int * param_1, int * param_2, uint param_3, uint param_4, int * param_5)
 * body: 005328f0-005329f9
 */

void __cdecl FUN_005328f0(int *param_1,int *param_2,uint param_3,uint param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *local_4;
  
  if (param_2 != (int *)0x0) {
    FUN_00518700(DAT_0074c600);
    if (param_3 == param_4) {
      param_4 = 0;
    }
    iVar2 = FUN_00514af0(*(int **)(param_3 + 0x3c));
    local_4 = (int *)FUN_00514b50(iVar2 * 2 + 2);
    iVar2 = DAT_0074c6d0 + 1;
    DAT_0074c6d0 = iVar2;
    for (uVar4 = param_3; uVar4 != 0; uVar4 = (uVar4 != param_3) - 1 & param_4) {
      if (*(int *)(uVar4 + 0x48) != iVar2) {
        *(int *)(uVar4 + 0x48) = iVar2;
        FUN_00514020((int *)&local_4,uVar4);
        iVar2 = DAT_0074c6d0;
      }
      iVar1 = *(int *)(uVar4 + 0x3c);
      if (iVar1 != 0) {
        piVar5 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar5 = piVar5 + 1;
          if ((*(int *)(iVar1 + 0x48) != iVar2) &&
             ((*(int *)(iVar1 + 0x48) = iVar2, param_5 != (int *)0x0 ||
              (uVar3 = FUN_00533dd0(iVar1), iVar2 = DAT_0074c6d0, uVar3 == 0)))) {
            FUN_00514020((int *)&local_4,iVar1);
            iVar2 = DAT_0074c6d0;
          }
          iVar1 = *piVar5;
        }
      }
    }
    FUN_00531c60(param_1,param_2,(int *)0x0,local_4,param_5);
    FUN_00514ba0((int *)&local_4);
  }
  return;
}


