
/* ==== FUN_00531390 @ 00531390 ==== 
 * signature: undefined __cdecl FUN_00531390(int * param_1, int param_2, int param_3)
 * body: 00531390-00531484
 */

void __cdecl FUN_00531390(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((param_3 == 0x10) || (param_3 == 0x18)) {
    FUN_00514af0(*(int **)(param_2 + 0x34));
    FUN_00558953(param_1,&DAT_005c38cc);
  }
  if (((*(uint *)(param_2 + 0x50) & 0x800) == 0) &&
     ((DAT_0074c03c < 3 || ((*(uint *)(param_2 + 0x50) & 0x1000) != 0)))) {
    iVar1 = *(int *)(param_2 + 0x34);
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        do {
          FUN_005164c0(*(uint *)(iVar1 + 8));
          FUN_00558953(param_1,&DAT_005c38cc);
          if (piVar2 == (int *)(*(int *)(param_2 + 0x34) + 4)) {
            piVar2 = piVar2 + 2;
          }
          else if (piVar2 == (int *)(*(int *)(param_2 + 0x34) + 8)) {
            piVar2 = piVar2 + -1;
          }
          else {
            piVar2 = piVar2 + 1;
          }
          iVar1 = *piVar2;
        } while (iVar1 != 0);
        FUN_00558953(param_1,&DAT_005ae60c);
        return;
      }
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x34);
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        piVar2 = piVar2 + 1;
        FUN_005164c0(*(uint *)(iVar1 + 8));
        FUN_00558953(param_1,&DAT_005c38cc);
        iVar1 = *piVar2;
      }
    }
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  return;
}


