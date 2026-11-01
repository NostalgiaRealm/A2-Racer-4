
/* ==== FUN_0052ff10 @ 0052ff10 ==== 
 * signature: undefined __cdecl FUN_0052ff10(int * param_1, int param_2, int param_3, int param_4)
 * body: 0052ff10-00530009
 */

void __cdecl FUN_0052ff10(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *local_8;
  int local_4;
  
  iVar1 = FUN_00514af0(DAT_0074c6ec);
  iVar1 = iVar1 + DAT_0074c044;
  local_8 = (int *)FUN_00514b50(iVar1);
  FUN_00514dd0(local_8,0,iVar1);
  local_4 = FUN_0052db00(param_2,param_3,param_4);
  if (local_4 != 0) {
    piVar4 = (int *)(local_4 + 4);
    iVar1 = *(int *)(local_4 + 4);
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      iVar2 = FUN_005164c0(*(uint *)(iVar1 + 8));
      if (-1 < iVar2) {
        local_8[iVar2 + 1] = *(int *)(iVar1 + 8);
      }
      iVar1 = *piVar4;
    }
  }
  FUN_00514ba0(&local_4);
  FUN_00558953(param_1,&DAT_005c3290);
  if (local_8 != (int *)0x0) {
    iVar1 = local_8[1];
    iVar3 = 0;
    iVar2 = FUN_00514af0(local_8);
    if (0 < iVar2) {
      iVar5 = 4;
      do {
        if (iVar1 != 0) {
          FUN_00558953(param_1,&DAT_005c3290);
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 4;
        iVar1 = *(int *)(iVar5 + (int)local_8);
      } while (iVar3 < iVar2);
    }
  }
  FUN_00514ba0((int *)&local_8);
  return;
}


