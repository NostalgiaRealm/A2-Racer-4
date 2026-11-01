
/* ==== TGroupBox.set_Visible @ 0042e64c ==== 
 * signature: undefined __register TGroupBox.set_Visible(int * param_1, uint param_2, undefined4 param_3)
 * body: 0042e64c-0042e68f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_Visible(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)((int)param_1 + 0x47) != (char)param_2) {
    FUN_00403178(param_1,param_2,param_3);
    *(char *)((int)param_1 + 0x47) = (char)param_2;
    FUN_0042f720((int)param_1,0xb00b,param_2 & 0xff,0);
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


