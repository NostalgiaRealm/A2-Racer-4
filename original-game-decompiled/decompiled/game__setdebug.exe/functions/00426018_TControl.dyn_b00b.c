
/* ==== TControl.dyn_b00b @ 00426018 ==== 
 * signature: undefined TControl.dyn_b00b(void)
 * body: 00426018-0042603d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_b00b(int param_1)

{
  char cVar1;
  
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) || ((*(byte *)(param_1 + 0x41) & 4) != 0)) {
    if ((*(char *)(param_1 + 0x47) == '\0') || ((*(byte *)(param_1 + 0x40) & 0x40) == 0)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    FUN_00424c10(param_1,'\x01',cVar1);
  }
  return;
}


