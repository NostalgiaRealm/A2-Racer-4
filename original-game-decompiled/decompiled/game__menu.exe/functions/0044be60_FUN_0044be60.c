
/* ==== FUN_0044be60 @ 0044be60 ==== 
 * signature: undefined __register FUN_0044be60(char param_1)
 * body: 0044be60-0044be84
 */

void FUN_0044be60(char param_1)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  local_4 = -(uint)(param_1 != '\0');
  SystemParametersInfoA(0x49,8,&local_8,0);
  return;
}


