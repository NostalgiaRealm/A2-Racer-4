
/* ==== TGDIButtonDefinition.set_TransparentColor @ 00468024 ==== 
 * signature: undefined __register TGDIButtonDefinition.set_TransparentColor(int param_1, int param_2)
 * body: 00468024-0046803e
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButtonDefinition_set_TransparentColor(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = param_2;
    FUN_00467e60(param_1,0x5400,0,0);
  }
  return;
}


