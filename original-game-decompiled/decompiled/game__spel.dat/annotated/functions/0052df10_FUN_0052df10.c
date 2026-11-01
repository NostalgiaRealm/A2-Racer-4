
/* ==== FUN_0052df10 @ 0052df10 ==== 
 * signature: undefined4 __cdecl FUN_0052df10(int * param_1, int * param_2)
 * body: 0052df10-0052df57
 */

undefined4 __cdecl FUN_0052df10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if ((*(uint *)(iVar1 + 0x50) & 0x80000) != 0) {
    if ((*(uint *)(iVar2 + 0x50) & 0x80000) == 0) {
      return 1;
    }
    if (*(double *)(iVar2 + 0x20) < *(double *)(iVar1 + 0x20)) {
      return 1;
    }
    if (*(double *)(iVar1 + 0x20) == *(double *)(iVar2 + 0x20)) {
      return 0;
    }
  }
  return 0xffffffff;
}


