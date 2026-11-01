
/* ==== TGDIButtonDefinition.set_Height @ 004680c4 ==== 
 * signature: undefined __register TGDIButtonDefinition.set_Height(int param_1, int param_2)
 * body: 004680c4-004680eb
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButtonDefinition_set_Height(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x44) = param_2;
    FUN_00467b28(param_1);
    FUN_00467e60(param_1,0x5401,0,0);
  }
  return;
}


