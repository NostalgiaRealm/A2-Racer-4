
/* ==== TLabel.set_ParentShowHint @ 0042494c ==== 
 * signature: undefined TLabel.set_ParentShowHint(void)
 * body: 0042494c-0042496e
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_ParentShowHint(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x8a)) &&
     (*(char *)(param_1 + 0x8a) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb023,0,0);
  }
  return;
}


