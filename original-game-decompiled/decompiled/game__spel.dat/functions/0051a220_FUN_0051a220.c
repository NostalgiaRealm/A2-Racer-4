
/* ==== FUN_0051a220 @ 0051a220 ==== 
 * signature: int * __stdcall FUN_0051a220(void)
 * body: 0051a220-0051a272
 */

int * FUN_0051a220(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00514af0(DAT_0074c6ec);
  iVar2 = iVar2 + DAT_0074c044;
  piVar3 = (int *)FUN_00514b50(iVar2);
  FUN_00514dd0(piVar3,0,iVar2);
  for (piVar1 = DAT_0074c628; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)*piVar1) {
    FUN_0051a0a0(piVar3,piVar1[2],(int)piVar1);
  }
  return piVar3;
}


