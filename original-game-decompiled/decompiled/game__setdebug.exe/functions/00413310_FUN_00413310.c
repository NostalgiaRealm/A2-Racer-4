
/* ==== FUN_00413310 @ 00413310 ==== 
 * signature: uint __register FUN_00413310(int param_1, undefined4 param_2, uint param_3)
 * body: 00413310-00413321
 */

uint FUN_00413310(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_4;
  
  local_4 = param_3;
  uVar1 = FUN_00411b6c(param_1,&local_4,1);
  return CONCAT31((int3)((uint)uVar1 >> 8),(undefined1)local_4);
}


