
/* ==== FUN_0055a436 @ 0055a436 ==== 
 * signature: uint __cdecl FUN_0055a436(uint param_1, int * param_2)
 * body: 0055a436-0055a459
 */

uint __cdecl FUN_0055a436(uint param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    return param_1 & 0xff;
  }
  uVar2 = FUN_0055e48c(param_1,param_2);
  return uVar2;
}


