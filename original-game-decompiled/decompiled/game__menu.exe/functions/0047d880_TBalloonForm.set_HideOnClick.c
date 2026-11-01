
/* ==== TBalloonForm.set_HideOnClick @ 0047d880 ==== 
 * signature: undefined TBalloonForm.set_HideOnClick(void)
 * body: 0047d880-0047d897
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TBalloonForm_set_HideOnClick(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xb8]) {
    *(char *)(param_1 + 0xb8) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


