
/* ==== TBalloonForm.set_BalloonStyle @ 0047d850 ==== 
 * signature: undefined TBalloonForm.set_BalloonStyle(void)
 * body: 0047d850-0047d867
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBalloonForm_set_BalloonStyle(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x2d9)) {
    *(char *)((int)param_1 + 0x2d9) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


