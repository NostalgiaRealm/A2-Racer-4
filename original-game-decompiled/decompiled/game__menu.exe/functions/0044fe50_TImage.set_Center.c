
/* ==== TImage.set_Center @ 0044fe50 ==== 
 * signature: undefined TImage.set_Center(void)
 * body: 0044fe50-0044fe65
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImage_set_Center(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x139)) {
    *(char *)(param_1 + 0x139) = param_2;
    FUN_0044fea8(param_1,param_1);
  }
  return;
}


