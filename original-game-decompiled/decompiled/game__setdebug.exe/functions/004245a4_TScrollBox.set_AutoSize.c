
/* ==== TScrollBox.set_AutoSize @ 004245a4 ==== 
 * signature: undefined TScrollBox.set_AutoSize(void)
 * body: 004245a4-004245c1
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TScrollBox_set_AutoSize(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((cVar1 != (char)param_1[0x13]) && (*(char *)(param_1 + 0x13) = cVar1, cVar1 != '\0')) {
    FUN_00402ef0(param_1,param_2,param_3);
  }
  return;
}


