
/* ==== FUN_00423258 @ 00423258 ==== 
 * signature: int * __register FUN_00423258(POINT * param_1, undefined4 param_2)
 * body: 00423258-0042329e
 */

int * FUN_00423258(POINT *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int local_18 [2];
  
  piVar1 = FUN_00423224(param_1);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    cVar4 = '\0';
    FUN_00424398(piVar1,&param_1->x,local_18);
    piVar2 = (int *)FUN_00428124((int)piVar1,local_18,param_2,cVar4);
    piVar3 = piVar1;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2;
    }
  }
  return piVar3;
}


