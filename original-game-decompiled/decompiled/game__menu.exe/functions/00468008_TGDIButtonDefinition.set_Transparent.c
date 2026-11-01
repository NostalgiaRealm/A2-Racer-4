
/* ==== TGDIButtonDefinition.set_Transparent @ 00468008 ==== 
 * signature: undefined TGDIButtonDefinition.set_Transparent(void)
 * body: 00468008-00468022
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButtonDefinition_set_Transparent(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x54)) {
    *(char *)(param_1 + 0x54) = param_2;
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


