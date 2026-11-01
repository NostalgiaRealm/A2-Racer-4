
/* ==== TImage.set_Stretch @ 0044fe78 ==== 
 * signature: undefined TImage.set_Stretch(void)
 * body: 0044fe78-0044fe8d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImage_set_Stretch(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x138)) {
    *(char *)(param_1 + 0x138) = param_2;
    FUN_0044fea8(param_1,param_1);
  }
  return;
}


