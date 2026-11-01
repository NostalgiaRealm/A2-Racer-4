
/* ==== TAgent.set_Connected @ 00470530 ==== 
 * signature: undefined __register TAgent.set_Connected(int * param_1, undefined4 param_2, short param_3)
 * body: 00470530-00470558
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TAgent_set_Connected(int *param_1,undefined4 param_2,short param_3)

{
  undefined2 local_10 [4];
  undefined2 local_8;
  
  local_10[0] = 0xb;
  if (param_3 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 0xffff;
  }
  FUN_00470734(param_1,param_2,local_10);
  return;
}


