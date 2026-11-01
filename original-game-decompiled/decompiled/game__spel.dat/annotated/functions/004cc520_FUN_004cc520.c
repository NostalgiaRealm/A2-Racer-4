
/* ==== FUN_004cc520 @ 004cc520 ==== 
 * signature: undefined4 __cdecl FUN_004cc520(int * param_1)
 * body: 004cc520-004cc54d
 */

undefined4 __cdecl FUN_004cc520(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00740d50 != 0) {
    iVar2 = *param_1;
    while (-1 < iVar2) {
      FUN_004cbf30(iVar2);
      piVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      iVar2 = *piVar1;
    }
    return 0;
  }
  return 0;
}


