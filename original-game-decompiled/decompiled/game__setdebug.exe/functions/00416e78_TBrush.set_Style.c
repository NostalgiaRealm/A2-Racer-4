
/* ==== TBrush.set_Style @ 00416e78 ==== 
 * signature: undefined __register TBrush.set_Style(int * param_1, char param_2)
 * body: 00416e78-00416eaa
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBrush_set_Style(int *param_1,char param_2)

{
  byte abStack_18 [4];
  undefined4 local_14;
  char local_c;
  
  FUN_00416cc0((int)param_1,(undefined4 *)abStack_18);
  if (param_2 == '\x01') {
    local_14 = 0xffffff;
  }
  local_c = param_2;
  FUN_00416ce0(param_1,abStack_18);
  return;
}


