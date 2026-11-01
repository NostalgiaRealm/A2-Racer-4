
/* ==== TImage.set_Stretch @ 00443da4 ==== 
 * signature: undefined TImage.set_Stretch(void)
 * body: 00443da4-00443db9
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImage_set_Stretch(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x138)) {
    *(char *)(param_1 + 0x138) = param_2;
    FUN_00443dd4(param_1,param_1);
  }
  return;
}


