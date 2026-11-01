
/* ==== FUN_0042d198 @ 0042d198 ==== 
 * signature: int * __register FUN_0042d198(POINT * param_1, undefined4 param_2)
 * body: 0042d198-0042d1de
 */

int * FUN_0042d198(POINT *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int local_18 [2];
  
  piVar1 = FUN_0042d164(param_1);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    cVar4 = '\0';
    FUN_0042e2d8(piVar1,&param_1->x,local_18);
    piVar2 = (int *)FUN_004320c4((int)piVar1,local_18,param_2,cVar4);
    piVar3 = piVar1;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2;
    }
  }
  return piVar3;
}


