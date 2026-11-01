
/* ==== FUN_0042c750 @ 0042c750 ==== 
 * signature: int * __register FUN_0042c750(POINT * param_1, int * param_2, char param_3, int * param_4)
 * body: 0042c750-0042c79c
 */

int * FUN_0042c750(POINT *param_1,int *param_2,char param_3,int *param_4)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_EDX;
  
  if (param_3 == '\0') {
    pHVar1 = FUN_0042c724(param_1);
    *param_2 = (int)pHVar1;
    piVar2 = (int *)FUN_0042c6a8((HWND)*param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),5),
                                 DAT_004ac760,&param_1->x,0);
  }
  else {
    piVar2 = FUN_0042c4fc(&param_1->x,param_4);
    if (piVar2 != (int *)0x0) {
      iVar3 = FUN_004349e0(piVar2);
      *param_2 = iVar3;
    }
  }
  return piVar2;
}


