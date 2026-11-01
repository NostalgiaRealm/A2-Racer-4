
/* ==== FUN_00414ec4 @ 00414ec4 ==== 
 * signature: uint __register FUN_00414ec4(int param_1, undefined4 param_2, uint param_3)
 * body: 00414ec4-00414ed5
 */

uint FUN_00414ec4(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_4;
  
  local_4 = param_3;
  uVar1 = FUN_00413720(param_1,&local_4,1);
  return CONCAT31((int3)((uint)uVar1 >> 8),(undefined1)local_4);
}


