
/* ==== FUN_00430b44 @ 00430b44 ==== 
 * signature: undefined __register FUN_00430b44(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00430b44-00430b5d
 */

void FUN_00430b44(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[0xd]) {
    *(char *)(param_1 + 0xd) = (char)param_2;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


