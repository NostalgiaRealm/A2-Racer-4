
/* ==== FUN_00442034 @ 00442034 ==== 
 * signature: undefined4 __register FUN_00442034(int param_1, undefined4 param_2)
 * body: 00442034-00442062
 */

undefined4 FUN_00442034(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1,param_2);
    if (cVar2 != '\0') {
      FUN_00442ca8(param_1);
    }
  }
  return 0;
}


