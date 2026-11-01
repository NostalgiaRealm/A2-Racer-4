
/* ==== FUN_004138a8 @ 004138a8 ==== 
 * signature: undefined __register FUN_004138a8(int param_1, int param_2, undefined4 param_3)
 * body: 004138a8-00413919
 */

void FUN_004138a8(int param_1,int param_2,undefined4 param_3)

{
  int local_8;
  
  local_8 = param_2;
  if ((-0x81 < param_2) && (param_2 < 0x80)) {
    FUN_00413988(param_1,2,param_3);
    FUN_00413830(param_1,&local_8,1);
    return;
  }
  if ((param_2 < -0x8000) || (0x7fff < param_2)) {
    FUN_00413988(param_1,4,param_3);
    FUN_00413830(param_1,&local_8,4);
  }
  else {
    FUN_00413988(param_1,3,param_3);
    FUN_00413830(param_1,&local_8,2);
  }
  return;
}


