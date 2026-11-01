
/* ==== TPen.set_Mode @ 004187c0 ==== 
 * signature: undefined __register TPen.set_Mode(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004187c0-004187d3
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPen_set_Mode(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[6]) {
    *(char *)(param_1 + 6) = (char)param_2;
    FUN_00403178(param_1,param_2,param_3);
  }
  return;
}


