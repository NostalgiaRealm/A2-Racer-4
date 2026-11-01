
/* ==== FUN_00429560 @ 00429560 ==== 
 * signature: undefined1 __register FUN_00429560(int * param_1, int param_2)
 * body: 00429560-004295c5
 */

undefined1 FUN_00429560(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined3 extraout_var;
  
  piVar3 = FUN_00439eb4(param_1);
  if ((((piVar3 != (int *)0x0) && (param_1 != piVar3)) && (*(char *)((int)piVar3 + 0x215) != '\0'))
     && (cVar1 = FUN_00429560(piVar3,param_2), cVar1 != '\0')) {
    return 1;
  }
  bVar2 = FUN_00439dbc(*(uint *)(param_2 + 8));
  if (((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) &&
     (FUN_00402ef0(param_1,param_2 + 4,CONCAT31(extraout_var,bVar2)), *(short *)(param_2 + 4) == 0))
  {
    return 1;
  }
  return 0;
}


