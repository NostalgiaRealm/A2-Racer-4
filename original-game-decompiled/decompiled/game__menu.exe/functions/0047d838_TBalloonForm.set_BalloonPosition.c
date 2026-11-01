
/* ==== TBalloonForm.set_BalloonPosition @ 0047d838 ==== 
 * signature: undefined TBalloonForm.set_BalloonPosition(void)
 * body: 0047d838-0047d84f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBalloonForm_set_BalloonPosition(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xb6]) {
    *(char *)(param_1 + 0xb6) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


