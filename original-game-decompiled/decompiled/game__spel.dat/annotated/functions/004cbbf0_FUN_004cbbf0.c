
/* ==== FUN_004cbbf0 @ 004cbbf0 ==== 
 * signature: undefined4 __cdecl FUN_004cbbf0(int * param_1, int param_2, uint param_3, int param_4, int param_5)
 * body: 004cbbf0-004cbc68
 */

undefined4 __cdecl FUN_004cbbf0(int *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  
  FUN_004c3fa0((byte *)s__s__d__005b5e9c);
  iVar1 = 0;
  if (0 < param_4) {
    do {
      FUN_004c3fa0((byte *)s__s__d__005b5e9c);
      FUN_004cbb10(param_1,param_2,iVar1,param_3,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_4);
  }
  FUN_004c3fa0((byte *)s__s__d__005b5e9c);
  return 0;
}


