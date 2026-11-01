
/* ==== FUN_00520e30 @ 00520e30 ==== 
 * signature: undefined __cdecl FUN_00520e30(void * param_1, uint param_2, uint param_3, int param_4)
 * body: 00520e30-00520e86
 */

void __cdecl FUN_00520e30(void *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint local_8;
  uint local_4;
  
  if (param_2 < param_3) {
    local_8 = param_2;
    local_4 = param_3;
  }
  else {
    local_8 = param_3;
    local_4 = param_2;
  }
  iVar1 = FUN_00501940(param_1,(byte *)&local_8);
  if (iVar1 == 0) {
    FUN_005019c0(param_1,(byte *)&local_8,param_4);
    return;
  }
  *(int *)(param_4 + 0x14) = iVar1;
  *(int *)(iVar1 + 0x14) = param_4;
  return;
}


