
/* ==== TGDIButtonDefinition.set_Width @ 0046809c ==== 
 * signature: undefined __register TGDIButtonDefinition.set_Width(int param_1, int param_2)
 * body: 0046809c-004680c3
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButtonDefinition_set_Width(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = param_2;
    FUN_00467b28(param_1);
    FUN_00467e60(param_1,0x5401,0,0);
  }
  return;
}


