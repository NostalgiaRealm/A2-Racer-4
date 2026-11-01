
/* ==== FUN_0041b644 @ 0041b644 ==== 
 * signature: bool __register FUN_0041b644(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 0041b644-0041b659
 */

bool FUN_0041b644(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_0041b334(param_1,param_2,param_3);
  iVar2 = FUN_0041b290((int)piVar1,(short)param_2);
  return iVar2 != 0;
}


