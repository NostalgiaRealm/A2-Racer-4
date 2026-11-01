
/* ==== FUN_00433724 @ 00433724 ==== 
 * signature: undefined1 __register FUN_00433724(int * param_1, int param_2)
 * body: 00433724-00433789
 */

undefined1 FUN_00433724(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined3 extraout_var;
  
  piVar3 = FUN_00444864(param_1);
  if ((((piVar3 != (int *)0x0) && (param_1 != piVar3)) && (*(char *)((int)piVar3 + 0x215) != '\0'))
     && (cVar1 = FUN_00433724(piVar3,param_2), cVar1 != '\0')) {
    return 1;
  }
  bVar2 = FUN_0044476c(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     (FUN_00403178(param_1,param_2 + 4,CONCAT31(extraout_var,bVar2)), *(short *)(param_2 + 4) == 0))
  {
    return 1;
  }
  return 0;
}


