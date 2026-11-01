
/* ==== TFont.set_Size @ 004184b4 ==== 
 * signature: undefined __register TFont.set_Size(int * param_1, int param_2)
 * body: 004184b4-004184d3
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TFont_set_Size(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = MulDiv(param_2,param_1[7],0x48);
  TFont_set_Height(param_1,-iVar1);
  return;
}


