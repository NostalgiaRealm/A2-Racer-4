
/* ==== FUN_00422810 @ 00422810 ==== 
 * signature: int * __register FUN_00422810(POINT * param_1, int * param_2, char param_3, int * param_4)
 * body: 00422810-0042285c
 */

int * FUN_00422810(POINT *param_1,int *param_2,char param_3,int *param_4)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_EDX;
  
  if (param_3 == '\0') {
    pHVar1 = FUN_004227e4(param_1);
    *param_2 = (int)pHVar1;
    piVar2 = (int *)FUN_00422768((HWND)*param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),5),
                                 DAT_00447750,&param_1->x,0);
  }
  else {
    piVar2 = FUN_004225bc(&param_1->x,param_4);
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_0042a8b4(piVar2);
      *param_2 = iVar3;
    }
  }
  return piVar2;
}


