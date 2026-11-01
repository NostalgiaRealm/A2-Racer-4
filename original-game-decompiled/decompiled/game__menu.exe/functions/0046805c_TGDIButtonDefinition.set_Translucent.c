
/* ==== TGDIButtonDefinition.set_Translucent @ 0046805c ==== 
 * signature: undefined __register TGDIButtonDefinition.set_Translucent(int param_1, char param_2)
 * body: 0046805c-00468076
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButtonDefinition_set_Translucent(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x5c)) {
    *(char *)(param_1 + 0x5c) = param_2;
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


