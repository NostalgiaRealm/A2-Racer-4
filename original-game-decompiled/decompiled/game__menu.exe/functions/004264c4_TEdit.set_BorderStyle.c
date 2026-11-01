
/* ==== TEdit.set_BorderStyle @ 004264c4 ==== 
 * signature: undefined __register TEdit.set_BorderStyle(int * param_1, char param_2)
 * body: 004264c4-004264e4
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TEdit_set_BorderStyle(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x7d]) {
    *(char *)(param_1 + 0x7d) = param_2;
    FUN_00426abc(param_1);
    FUN_00431e04((int)param_1);
  }
  return;
}


