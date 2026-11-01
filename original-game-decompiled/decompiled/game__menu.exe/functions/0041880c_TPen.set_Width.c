
/* ==== TPen.set_Width @ 0041880c ==== 
 * signature: undefined __register TPen.set_Width(int * param_1, int param_2)
 * body: 0041880c-00418834
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPen_set_Width(int *param_1,int param_2)

{
  byte abStack_18 [8];
  int local_10;
  
  if (-1 < param_2) {
    FUN_00418690((int)param_1,(undefined4 *)abStack_18);
    local_10 = param_2;
    FUN_004186a8(param_1,abStack_18);
  }
  return;
}


