
/* ==== FUN_0040f024 @ 0040f024 ==== 
 * signature: undefined4 __register FUN_0040f024(undefined4 * param_1, int param_2)
 * body: 0040f024-0040f04a
 */

undefined4 FUN_0040f024(undefined4 *param_1,int param_2)

{
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  return *(undefined4 *)(param_1[1] + param_2 * 4);
}


