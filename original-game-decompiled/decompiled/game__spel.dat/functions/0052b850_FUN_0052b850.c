
/* ==== FUN_0052b850 @ 0052b850 ==== 
 * signature: undefined __cdecl FUN_0052b850(int * param_1, int param_2, int param_3)
 * body: 0052b850-0052b8f8
 */

void __cdecl FUN_0052b850(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      puVar2 = (uint *)(param_3 + 4);
      uVar1 = *(uint *)(param_3 + 4);
      while (uVar1 != 0) {
        puVar2 = puVar2 + 1;
        FUN_005164c0(uVar1);
        FUN_00558953(param_1,(byte *)&PTR_DAT_005bc6dc);
        uVar1 = *puVar2;
      }
    }
  }
  else {
    FUN_00558953(param_1,&DAT_005ae5f4);
    if (param_3 != 0) {
      puVar2 = (uint *)(param_3 + 4);
      uVar1 = *(uint *)(param_3 + 4);
      if (uVar1 != 0) {
        do {
          puVar2 = puVar2 + 1;
          FUN_005164c0(uVar1);
          FUN_00558953(param_1,&DAT_005c2844);
          uVar1 = *puVar2;
        } while (uVar1 != 0);
        FUN_00558953(param_1,&DAT_005ae60c);
        return;
      }
    }
  }
  FUN_00558953(param_1,&DAT_005ae60c);
  return;
}


