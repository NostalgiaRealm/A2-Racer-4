
/* ==== TLabel.set_Visible @ 004246fc ==== 
 * signature: undefined __register TLabel.set_Visible(int * param_1, uint param_2, undefined4 param_3)
 * body: 004246fc-0042473f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_Visible(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)((int)param_1 + 0x47) != (char)param_2) {
    FUN_00402ef0(param_1,param_2,param_3);
    *(char *)((int)param_1 + 0x47) = (char)param_2;
    FUN_00425780((int)param_1,0xb00b,param_2 & 0xff,0);
    FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


