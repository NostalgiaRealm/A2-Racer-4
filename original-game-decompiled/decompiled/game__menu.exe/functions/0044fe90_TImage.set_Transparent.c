
/* ==== TImage.set_Transparent @ 0044fe90 ==== 
 * signature: undefined TImage.set_Transparent(void)
 * body: 0044fe90-0044fea5
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImage_set_Transparent(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x13b)) {
    *(char *)(param_1 + 0x13b) = param_2;
    FUN_0044fea8(param_1,param_1);
  }
  return;
}


