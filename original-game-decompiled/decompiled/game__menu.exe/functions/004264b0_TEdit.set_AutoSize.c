
/* ==== TEdit.set_AutoSize @ 004264b0 ==== 
 * signature: undefined __register TEdit.set_AutoSize(int * param_1, char param_2)
 * body: 004264b0-004264c3
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TEdit_set_AutoSize(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x1f7)) {
    *(char *)((int)param_1 + 0x1f7) = param_2;
    FUN_00426abc(param_1);
  }
  return;
}


