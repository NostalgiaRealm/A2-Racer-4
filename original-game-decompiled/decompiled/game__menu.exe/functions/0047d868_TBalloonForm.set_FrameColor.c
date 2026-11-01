
/* ==== TBalloonForm.set_FrameColor @ 0047d868 ==== 
 * signature: undefined TBalloonForm.set_FrameColor(void)
 * body: 0047d868-0047d87f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBalloonForm_set_FrameColor(int *param_1,int param_2)

{
  if (param_2 != param_1[0xb7]) {
    param_1[0xb7] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


