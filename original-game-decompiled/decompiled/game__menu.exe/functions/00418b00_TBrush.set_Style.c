
/* ==== TBrush.set_Style @ 00418b00 ==== 
 * signature: undefined __register TBrush.set_Style(int * param_1, char param_2)
 * body: 00418b00-00418b32
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBrush_set_Style(int *param_1,char param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  char local_c;
  
  FUN_00418948((int)param_1,(undefined4 *)abStack_18);
  if (param_2 == '\x01') {
    local_14 = 0xffffff;
  }
  local_c = param_2;
  FUN_00418968(param_1,abStack_18);
  return;
}


