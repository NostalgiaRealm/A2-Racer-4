
/* ==== FUN_00533230 @ 00533230 ==== 
 * signature: undefined __cdecl FUN_00533230(int * param_1, int param_2)
 * body: 00533230-0053335c
 */

void __cdecl FUN_00533230(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_14;
  
  if (param_2 != 0) {
    FUN_005164c0(*(uint *)(param_2 + 8));
    FUN_00558953(param_1,(byte *)s___p_d__v_d___005c537c);
    if ((*(int *)(param_2 + 8) != 0) && (DAT_0074c03c != 0)) {
      local_14 = DAT_0074c03c;
      do {
        FUN_00558953(param_1,(byte *)s__5_2g_005c5374);
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    if ((*(uint *)(param_2 + 0x14) & 0x8000000) != 0) {
      FUN_00558953(param_1,(byte *)s_deleted_005c5368);
    }
    if ((*(uint *)(param_2 + 0x14) & 0x4000000) != 0) {
      FUN_00558953(param_1,(byte *)s_ridgedeleted_005c5358);
    }
    FUN_00558953(param_1,&DAT_005ae60c);
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_00558953(param_1,(byte *)s_neighbors__005c5348);
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar1 != 0) {
        piVar2 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar2 = piVar2 + 1;
          FUN_00558953(param_1,&DAT_005c39a4);
          iVar1 = *piVar2;
        }
      }
      FUN_00558953(param_1,&DAT_005ae60c);
    }
    return;
  }
  FUN_00558953(param_1,(byte *)s_NULLvertex_005c538c);
  return;
}


