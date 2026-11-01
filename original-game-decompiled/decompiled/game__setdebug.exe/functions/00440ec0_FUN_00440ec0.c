
/* ==== FUN_00440ec0 @ 00440ec0 ==== 
 * signature: undefined __register FUN_00440ec0(char param_1)
 * body: 00440ec0-00440ee4
 */

void FUN_00440ec0(char param_1)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  local_4 = -(uint)(param_1 != '\0');
  SystemParametersInfoA(0x49,8,&local_8,0);
  return;
}


