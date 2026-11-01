
/* ==== FUN_0041545c @ 0041545c ==== 
 * signature: undefined __register FUN_0041545c(int param_1, int param_2, undefined4 param_3)
 * body: 0041545c-004154cd
 */

void FUN_0041545c(int param_1,int param_2,undefined4 param_3)

{
  int local_8;
  
  local_8 = param_2;
  if ((-0x81 < param_2) && (param_2 < 0x80)) {
    FUN_0041553c(param_1,2,param_3);
    FUN_004153e4(param_1,&local_8,1);
    return;
  }
  if ((param_2 < -0x8000) || (0x7fff < param_2)) {
    FUN_0041553c(param_1,4,param_3);
    FUN_004153e4(param_1,&local_8,4);
  }
  else {
    FUN_0041553c(param_1,3,param_3);
    FUN_004153e4(param_1,&local_8,2);
  }
  return;
}


