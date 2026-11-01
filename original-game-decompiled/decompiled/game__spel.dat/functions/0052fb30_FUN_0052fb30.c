
/* ==== FUN_0052fb30 @ 0052fb30 ==== 
 * signature: undefined __cdecl FUN_0052fb30(int * param_1, undefined4 param_2, int param_3, int param_4, int param_5)
 * body: 0052fb30-0052fcaa
 */

void __cdecl FUN_0052fb30(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  if (DAT_0074c6b8 == 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__no_facets_printed_005c3768);
  }
  switch(param_2) {
  case 7:
    if (((DAT_0074c03c != 4) || (-1 < DAT_0074be48)) || (DAT_0074bef8 != 0)) {
      FUN_00558953(param_1,&DAT_005b2640);
      return;
    }
    DAT_0074c6d0 = DAT_0074c6d0 + 1;
    local_4 = 0;
    for (; (param_3 != 0 && (*(int *)(param_3 + 0x30) != 0)); param_3 = *(int *)(param_3 + 0x30)) {
      FUN_0052fcd0(param_1,param_3,&local_4,param_5);
    }
    if (param_4 != 0) {
      piVar2 = (int *)(param_4 + 4);
      iVar1 = *(int *)(param_4 + 4);
      while (iVar1 != 0) {
        piVar2 = piVar2 + 1;
        FUN_0052fcd0(param_1,iVar1,&local_4,param_5);
        iVar1 = *piVar2;
      }
    }
    if ((local_4 != DAT_0074c73c) || (DAT_0074c6b4 != DAT_0074c73c)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_printen_005c370c);
      FUN_0051e8e0(5,(int *)0x0);
      return;
    }
    break;
  case 9:
  case 0xb:
  case 0xc:
    if (DAT_0074be28 != 0) {
      FUN_00558953(param_1,&DAT_005c3704);
      return;
    }
    break;
  case 0xe:
    FUN_00558953(param_1,&DAT_005b2640);
    return;
  case 0x14:
    if (DAT_0074be28 != 0) {
      FUN_00558953(param_1,&DAT_005c3704);
    }
  }
  return;
}


