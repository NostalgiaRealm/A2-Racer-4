
/* ==== TLabel.set_Transparent @ 0042626c ==== 
 * signature: undefined TLabel.set_Transparent(void)
 * body: 0042626c-004262a4
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_Transparent(int *param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = TLabel_get_Transparent((int)param_1);
  if (param_2 != (char)uVar1) {
    if (param_2 == '\0') {
      param_1[0x10] = param_1[0x10] | 0x40;
    }
    else {
      param_1[0x10] = param_1[0x10] & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


