
/* ==== FUN_00514650 @ 00514650 ==== 
 * signature: undefined __cdecl FUN_00514650(undefined4 * param_1)
 * body: 00514650-0051467f
 */

void __cdecl FUN_00514650(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2 * 4 + 8, DAT_0074c760 < iVar1)) {
    FUN_0051e2b0(piVar2,iVar1);
    *param_1 = 0;
  }
  return;
}


