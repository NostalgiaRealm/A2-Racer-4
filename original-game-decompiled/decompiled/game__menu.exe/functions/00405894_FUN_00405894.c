
/* ==== FUN_00405894 @ 00405894 ==== 
 * signature: int * __register FUN_00405894(int * param_1, undefined4 * param_2)
 * body: 00405894-004058bd
 */

int * FUN_00405894(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    piVar2 = (int *)*param_1;
    if (piVar2 != (int *)0x0) {
      *param_1 = 0;
      (**(code **)(*piVar2 + 8))();
      param_1 = piVar2;
    }
    return param_1;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00402808(CONCAT31((int3)((uint)iVar1 >> 8),0x17));
    return piVar2;
  }
  return (int *)0x0;
}


