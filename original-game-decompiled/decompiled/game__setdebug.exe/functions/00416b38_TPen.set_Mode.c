
/* ==== TPen.set_Mode @ 00416b38 ==== 
 * signature: undefined __register TPen.set_Mode(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00416b38-00416b4b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPen_set_Mode(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[6]) {
    *(char *)(param_1 + 6) = (char)param_2;
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


