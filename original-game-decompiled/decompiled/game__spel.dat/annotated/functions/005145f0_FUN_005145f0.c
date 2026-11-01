
/* ==== FUN_005145f0 @ 005145f0 ==== 
 * signature: undefined __cdecl FUN_005145f0(undefined4 * param_1)
 * body: 005145f0-0051464f
 */

void __cdecl FUN_005145f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3 * 4 + 8;
    if (iVar2 <= DAT_0074c760) {
      DAT_0074c79c = DAT_0074c79c + 1;
      puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + iVar2 * 4) * 4);
      *(undefined4 *)*param_1 = *puVar1;
      *puVar1 = *param_1;
      *param_1 = 0;
      return;
    }
    FUN_0051e2b0(piVar3,iVar2);
    *param_1 = 0;
  }
  return;
}


