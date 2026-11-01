
/* ==== TGDIButtonDefinition.set_TransparentMode @ 00468040 ==== 
 * signature: undefined __register TGDIButtonDefinition.set_TransparentMode(int param_1, char param_2)
 * body: 00468040-0046805a
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButtonDefinition_set_TransparentMode(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x55)) {
    *(char *)(param_1 + 0x55) = param_2;
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


