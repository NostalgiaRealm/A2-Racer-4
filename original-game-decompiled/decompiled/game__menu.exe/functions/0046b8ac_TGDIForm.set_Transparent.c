
/* ==== TGDIForm.set_Transparent @ 0046b8ac ==== 
 * signature: undefined TGDIForm.set_Transparent(void)
 * body: 0046b8ac-0046b8d2
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIForm_set_Transparent(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xb7]) {
    *(char *)(param_1 + 0xb7) = param_2;
    FUN_0046b828(param_1);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


