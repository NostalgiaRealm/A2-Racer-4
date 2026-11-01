
/* ==== FUN_00442650 @ 00442650 ==== 
 * signature: undefined __fastcall FUN_00442650(void * param_1)
 * body: 00442650-0044269c
 */

void __fastcall FUN_00442650(void *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if ((*(int *)((int)param_1 + 0xe8) != 0) && (0 < DAT_005d2ab0)) {
    piVar2 = &DAT_005ce9e8;
    do {
      FUN_00442540(param_1,*piVar2,iVar1);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xa5;
    } while (iVar1 < DAT_005d2ab0);
  }
  FUN_00442540(param_1,DAT_006fba58,iVar1);
  return;
}


